#include <iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    map<string,string>phonebook;
    cout<<"Welcome phonebook"<<endl;

    while(true){
        cout<<"1.Add contact"<<endl;
        cout<<"2.Search contact"<<endl;
        cout<<"3.Display contacts"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        int choice;
        cin>>choice;
        switch(choice){
            case 1:{
                string name,number;
                cout<<"Enter name"<<endl;
                cin>>name;
                cout<<"Enter number"<<endl;
                cin>>number;
                phonebook[name]=number;
                cout<<"Contact added succesfully"<<endl;
                break;
            }
            case 2:{
                string name;
                cout<<"Enter name"<<endl;
                cin>>name;
                if(phonebook.find(name)!= phonebook.end()){
                    cout<<"Contact found"<<endl;
                }
                else{
                    cout<<"doesnot exist"<<endl;
                }break;
            }
            case 3:{
                cout<<"contact"<<endl;
                for(const auto& entry:phonebook){
                    cout<<"Name"<<entry.first<<"Number"<<entry.second<<endl;
                }
                break;
            }
            case 4:{
                 cout<<"Exiting phonebook...."<<endl;
                 return 0;
            }
        }
    }
    
}
