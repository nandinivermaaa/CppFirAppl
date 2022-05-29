#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Hello! Welcome to 'Sandwich Cedar'"<<endl;
    cout<<"Please create a new account"<<endl;
    cout<<"Choose a username"<<endl;
    string user;
    getline(cin,user);
    cout<<"Create password"<<endl;
    string pass;
    getline(cin,pass);

    cout<<"Login"<<endl;
    cout<<"Enter username"<<endl;
    string usere;
    getline(cin,usere);
    cout<<"Enter password"<<endl;
    string passe;
    getline(cin,passe);
    //double new_bal;

    while(usere!=user || passe!=pass){
        cout<<"Wrong details. Try again"<<endl;
        cout<<"Enter username"<<endl;

        getline(cin,usere);
        cout<<"Enter password"<<endl;

        getline(cin,passe);
    }
    cout<<"Welcome "<<usere<<endl;
    double balance=5.00;
    double add;
    cout<<"Your current balance is: "<<balance<<" dollars"<<endl;
    cout<<"Would you like to add money?"<<endl;
    string mon;
    getline(cin,mon);
        if(mon=="yes"){
            cout<<"How much?"<<endl;


            cin>>add;
            //new_bal=bal+add;
            cout<<"Your new balance is : "<<balance+add<<" dollars."<<endl;
            }
        else{
            cout<<"Alright"<<endl;
        }


    cout<<"Would you like to have a sandwich today?"<<endl;
    string ans;
    cin>>ans;


    if(ans=="yes"){
        cout<<"Please select from the menu."<<endl;
        string menu[]={"Cold sandwich", "Grilled Sandwich", "Chessy Sandwich"};
        double price[]={3.00, 4.00, 5.00};
        cout<<"1. "<<menu[0]<<"--"<<price[0]<<"dollars"<<endl;
        cout<<"2. "<<menu[1]<<"--"<<price[1]<<"dollars"<<endl;
        cout<<"3. "<<menu[2]<<"--"<<price[2]<<"dollars"<<endl;

        cout<<"Your choice :"<<endl;
        int choice;
        cin>>choice;

            while(choice>3 || choice<1){
                cout<<"This is an invalid entry. Please try again"<<endl;
                cin>>choice;}
                //double new_bal;


    if(choice==1){
        cout<<"You chose "<<choice<<" which is "<< menu[0]<<" for "<<price[0]<<" dollars"<<endl;
        cout<<"Your balance left is "<<add - price[0]<<endl;
    }
    else if(choice==2){
        cout<<"You chose "<<choice<<" which is "<< menu[1]<<" for "<<price[1]<<" dollars"<<endl;
        cout<<"Your balance left is "<<add - price[1]<<endl;

    }
    else if(choice==3){
        cout<<"You chose "<<choice<<" which is "<< menu[2]<<" for "<<price[2]<<" dollars"<<endl;
        cout<<"Your balance left is "<<add - price[2]<<endl;

    }

    }
    else{
        cout<<"Alright, have a good day!"<<endl;
    }




return 0;
}

