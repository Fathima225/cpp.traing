//simple inventory management ,menu-driven,add products,,typr,category.provide add/remove/update inventory.search and listing

#include <iostream>
#include <string>
using namespace std;

const int MAX_PRODUCTS = 100;

struct Product {
    int id;
    string name;
    string type;
    string category;
    int quantity;
};


void addProduct();
void listProducts();
void removeProduct();
void updateProduct();
void searchProduct();
void showMenu();



Product inventory[MAX_PRODUCTS];
int productCount = 0;

void addProduct() 
{
    if (productCount >= MAX_PRODUCTS)
    {
        cout << "Inventory is full!\n";
        return;
    }

    Product p;
    cout << "Enter Product ID: ";
    cin >> p.id;
    cin.ignore();
    cout << "Enter Product Name: ";
    getline(cin, p.name);
    cout << "Enter Product Type: ";
    getline(cin, p.type);
    cout << "Enter Product Category: ";
    getline(cin, p.category);
    cout << "Enter Quantity: ";
    cin >> p.quantity;

    inventory[productCount++] = p;
    cout << "Product added successfully!\n";
}

void listProducts() 
{
    if (productCount == 0) 
    {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "\nProduct List:\n";
    for (int i = 0; i < productCount; i++)
    {
        cout << "ID: " << inventory[i].id
            << ", Name: " << inventory[i].name
            << ", Type: " << inventory[i].type
            << ", Category: " << inventory[i].category
            << ", Quantity: " << inventory[i].quantity << endl;
    }
}

void removeProduct()
{
    int id;
    cout << "Enter Product ID to remove: ";
    cin >> id;

    for (int i = 0; i < productCount; i++) 
    {
        if (inventory[i].id == id) {
            for (int j = i; j < productCount - 1; j++) 
            {
                inventory[j] = inventory[j + 1];
            }
            productCount--;
            cout << "Product removed successfully.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

void updateProduct() 
{
    int id;
    cout << "Enter Product ID to update: ";
    cin >> id;

    for (int i = 0; i < productCount; i++) 
    {
        if (inventory[i].id == id) {
            cout << "Enter new Product Name: ";
            cin.ignore();
            getline(cin, inventory[i].name);
            cout << "Enter new Type: ";
            getline(cin, inventory[i].type);
            cout << "Enter new Category: ";
            getline(cin, inventory[i].category);
            cout << "Enter new Quantity: ";
            cin >> inventory[i].quantity;

            cout << "Product updated successfully.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

void searchProduct()
{
    string name;
    cout << "Enter Product Name to search: ";
    cin.ignore();
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < productCount; i++)
    {
        if (inventory[i].name == name) 
        {
            cout << "Found - ID: " << inventory[i].id
                << ", Type: " << inventory[i].type
                << ", Category: " << inventory[i].category
                << ", Quantity: " << inventory[i].quantity << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Product not found.\n";
    }
}

void showMenu() 
{
    cout << "\nInventory Management System\n";
    cout << "1. Add Product\n";
    cout << "2. List Products\n";
    cout << "3. Remove Product\n";
    cout << "4. Update Product\n";
    cout << "5. Search Product\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

int main()
{
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1: addProduct(); break;
        case 2: listProducts(); break;
        case 3: removeProduct(); break;
        case 4: updateProduct(); break;
        case 5: searchProduct(); break;
        case 6: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
