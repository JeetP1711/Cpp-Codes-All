// E-commerce platform management
#include <iostream>
#include <map>
using namespace std;

map<string, map<string, double>> items; // 1 for string category 2 for string its options and double for prices
void products()
{
    items["Book"]["1984"] = 150; // items are used in fun for map name
    items["Book"]["Ikigai"] = 250;
    items["Soap"]["Cinthol"] = 40;
    items["Soap"]["Lux"] = 50;
}
void purchase(const string &category, const string &type)
{
    if (items.find(category) != items.end() && items[category].find(type) != items[category].end())
    {
        cout << "You have purchased " << type << " in " << category << " for Rs." << items[category][type] << endl;
    }
    else
    {
        cout << "Invalid selection! Item not available." << endl;
    }
}
int main()
{
    products(); // just to recall the products
    cout << "Welcome to our shop!\n";
    bool continueShopping = true;
    while (continueShopping)
    {
        cout << "Available Products:\n";
        for (const auto &category : items)
        {                                    // auto means je value hoi ej lese
            cout << category.first << ":\n"; // category
            for (const auto &type : category.second)
            {
                cout << "-" << type.first << "Price: " << type.second << endl; // type
            }
        }
        string category, type;
        cout << "Enter the category and model you want to purchase: ";
        cin >> category >> type;
        purchase(category, type);
        char choice;
        cout << "Do you want to continue shopping? (y/n): ";
        cin >> choice;
        continueShopping = (choice == 'y' || choice == 'Y');
    }
    cout << "Thank you for shopping with us!Goodbye!" << endl;
    return 0;
}
