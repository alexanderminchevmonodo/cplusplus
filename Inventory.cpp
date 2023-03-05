#include <iostream>
#include <windows.h>
using namespace std;

struct Item
{
    string name;
    int quantity;
    double price;

};

int main ()
{

    const int MAX_ITEMS = 100;
    Item inventory[MAX_ITEMS];
    int numItems=0;

    inventory[numItems]= {"Computer",10,500}; //quantity->price
    numItems++;
    inventory[numItems]= {"Apple",20,1};
    numItems++;
    inventory[numItems]= {"Chair",10,50};
    numItems++;

//search
//esc to clear console
    while(true)
    {


        string itemName;
        cout << "Enter the name of the item to search for: ";
        cin >> itemName;
        cout << endl;
        bool found = false;
        for (int i = 0; i < numItems; i++)
        {
            if (inventory[i].name == itemName)
            {
                cout << "Item found at index " << i << ":" << endl;
                cout << "Name: " << inventory[i].name << endl;
                cout << "Quantity: " << inventory[i].quantity << endl;
                cout << "Price: $" << inventory[i].price << endl;
                found = true;
                break;
            }

        }
        cout << endl;
        system("pause");
        cout << endl;
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            system("cls");
        }
    }


    return 0;
}
