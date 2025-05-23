#include<iostream>
#include<cstring>
#define MAX 3;
using namespace std;
int productcount = 0;
class Retailshop {
private:
    int id;
    string name;
    string type;
    string category;
    int quantity;
public:
    void setId(int id) {
        id = id;
    }
    int getId()
    {
        return id;
    }
    void setName(string n)
    {
        name=n;
    }
    string getName()
    {
        return name;
    }
    void setType(string t)
    {
        type = t;
    }
    string getType()
    {
        return type;
    }
    void setCategory(string c)
    {
        category = c;
    }
    string getCategory()
    {
        return category;
    }
    void setQuantity(int q)
    {
        quantity = q;
    }
    int getQuantity()
    {
        return quantity;
    }
public:
   
    void addProduct()
    {
        
        if(productcount>=MAX)
        {
            if (quantity == 0) {
                cout << "Enter product id" << endl;
                cin >> id;
                cout << "Enter product name" << endl;
                cin>>
            }
        }
    }
};