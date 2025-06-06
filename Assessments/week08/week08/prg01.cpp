#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Register {
public:
    int AX;
    int BX;
    int CX;
    int DX;
    vector<int> memory;
    bool halted;

    Register() : memory(64, 0) {
        AX = 0; BX = 0; CX = 0; DX = 0;
        halted = false;
    }

    int* getRegister(const string& reg) {
        if (reg == "AX") return &AX;
        if (reg == "BX") return &BX;
        if (reg == "CX") return &CX;
        if (reg == "DX") return &DX;
        return nullptr;
    }

    int* parseOperand(const string& op, int& immediate) {
        if (op.length() >= 3 && op[0] == '[' && op[op.length() - 1] == ']') {
            string inside = op.substr(1, op.length() - 2);
            int addr = stoi(inside);
            if (addr >= 0 && addr < (int)memory.size()) {
                return &memory[addr];
            }
            cout << "Error: invalid memory address " << addr << "\n";
            return nullptr;
        }

        int* regPtr = getRegister(op);
        if (regPtr != nullptr) return regPtr;

        // Otherwise, it's immediate
        immediate = stoi(op);
        return nullptr;
    }

    void execute(const string& line) {
        if (halted || line.empty()) return;

        if (line == "HLT") {
            halted = true;
            return;
        }

        if (line.length() < 3) {
            cout << "Invalid instruction: " << line << "\n";
            return;
        }

        string instr = line.substr(0, 3);
        string rest = line.substr(3);

        size_t commaPos = rest.find(',');
        string op1, op2;
        if (commaPos == string::npos) {
            op1 = rest;
            op2 = "";
        }
        else {
            op1 = rest.substr(0, commaPos);
            op2 = rest.substr(commaPos + 1);
        }

        int immediate = 0;
        int* dest = parseOperand(op1, immediate);
        int* src = nullptr;
        if (!op2.empty()) {
            src = parseOperand(op2, immediate);
        }

        if (instr == "MOV") {
            if (dest == nullptr) {
                cout << "Invalid MOV destination\n";
                return;
            }
            if (src != nullptr) {
                *dest = *src;
            }
            else {
                *dest = immediate;
            }
        }
        else if (instr == "ADD") {
            if (dest == nullptr) {
                cout << "Invalid ADD destination\n";
                return;
            }
            if (src != nullptr) {
                *dest = *dest + *src;
            }
            else {
                *dest = *dest + immediate;
            }
        }
        else if (instr == "SUB") {
            if (dest == nullptr) {
                cout << "Invalid SUB destination\n";
                return;
            }
            if (src != nullptr) {
                *dest = *dest - *src;
            }
            else {
                *dest = *dest - immediate;
            }
        }
        else if (instr == "MUL") {
            if (dest == nullptr) {
                cout << "Invalid MUL destination\n";
                return;
            }
            if (src != nullptr) {
                *dest = (*dest) * (*src);
            }
            else {
                *dest = (*dest) * immediate;
            }
        }
        else if (instr == "DIV") {
            if (dest == nullptr) {
                cout << "Invalid DIV destination\n";
                return;
            }
            int divisor = src != nullptr ? *src : immediate;
            if (divisor == 0) {
                cout << "Error: division by zero\n";
                return;
            }
            *dest = *dest / divisor;
        }
        else {
            cout << "Unknown instruction: " << instr << "\n";
        }
    }

    void printSnapshot() {
        cout << "\n--- CPU Snapshot ---\n";
        cout << "AX=" << AX << "\n";
        cout << "BX=" << BX << "\n";
        cout << "CX=" << CX << "\n";
        cout << "DX=" << DX << "\n";
        cout << "\nMemory[0..15]:\n";
        for (int i = 0; i < 16; i++) {
            cout << "[" << i << "]=" << memory[i] << "\n";
        }
    }
};

int main() {
    Register reg;

    ifstream fin("instructions.txt");
    if (!fin) {
        cout << "Failed to open instructions.txt\n";
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        reg.execute(line);
        if (reg.halted) break;
    }

    cout << "CPU halted.\n";
    reg.printSnapshot();

    return 0;
}