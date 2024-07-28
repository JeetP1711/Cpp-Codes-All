#include<iostream>
#include<map>
using namespace std;

map<string, map<string, double>> items; //entry.first and entry.second

void products(){
    items["Book"]["Ikigai"] = 200;
    items["Book"]["1984"] = 190;
    items["Bags"]["Skybags"] = 530;
    items["Bags"]["American Tourister"] = 640;
    items["Soap"]["Cinthol"] = 50;
    items["Soap"]["Lux"] = 20;
}

void purchase(const string& category, const string& type){
    if(items.find(category) != items.end() && items[category].find(type) != items[category].end()){
        cout<<"You purchased "<<type<<" in "<<category<<" for Rs. "<<items[category][type]<<endl;
    }
    else
    cout<<"Invalid selection of items......!";
}

int main(){
    products();
    int a=0;
    cout<<"Welcome to our shop...!!!"<<endl;
    bool continueShopping = true;
    while(continueShopping){
        cout<<"Available Products:\n";
        for(const auto& category : items){
            cout<< category.first << ":\n";
            for(const auto& type: category.second){
                cout<<"- "<<type.first<<"Price: "<<type.second<<endl;
            }
        }


        string category, type;
        cout<<"Enter the category and model you want to purchase: ";
        cin>>category>>type;
        purchase(category, type);

        char choice;
        cout<<"Do you want to continue?? (y/n)";
        cin>>choice;
        continueShopping = (choice=='Y' || choice=='y');
    }
    cout<<"Thank you for visiting our e-commerce site"<<endl;
    return 0;
}