#include<iostream>
#include<ctime>
using namespace std;
int main(){
    cout<<"\n #################### WELCOME TO ATM ####################";
    cout<<"\n";
    cout<<"\n         -----------------------------------------       ";
    cout<<"\n          current date : ";

    // Get the current time
    time_t currentTime = time(nullptr);

    // Convert to local time
    tm* localTime = localtime(&currentTime);

    // Print the formatted date and time
    cout << asctime(localTime);
    cout<<"         -----------------------------------------       \n";
    cout<<"\n ########################################################";

    cout<<"\n press 1 Then Enter To Access Your Account Via Pin Number";
    cout<<"\n                           OR                             ";
    cout<<"\n Press 0 And Press Enter TO Get Help \n";
    int choice;
    cin>>choice;
        if(choice == 0){
            cout<<"\n ################## ATM ACCOUNT STATUS ################## \n";
            cout<<"\n You must have the correct pin number to access this acount";
            cout<<"\n  see your bank representative for assistance during bank ";
            cout<<"\n       opening hours thanks for, your choice today!!      \n";
            cout<<"\n ########################################################";
        }
        else{
            cout<<"\n ###################### ATM ACCOUNT ACCESS ###################### \n";
            cout<<"\n Enter Your Acc Pin Access Number! [Only one attemp is allowed] \n";
            cout<<"\n ################################################################ \n";
            int pin;
            cin>>pin;
            if(pin!=12345){
                cout<<"\n ################################## THANK YOU ################################## \n";
                cout<<"\n You had made your attempt whitch failed!!! no more attempts allowed!! sorry!! \n";
                cout<<"\n ############################################################################### \n";
            }
            else{
                cout<<"\n ########################## ATM Main Menu Screen ######################### \n ";
                cout<<"\n                           Enter [1] To deposit cash";
                cout<<"\n                           Enter [2] To withdraw cash";
                cout<<"\n                           Enter [3] To Balance Inquiry";
                cout<<"\n                           Enter [0] To Exit ATM \n";
                cout<<"\n                   PLEASE ENTER A SELECTION AND PRESS RETURN KEY :             \n";
                cout<<"\n ######################################################################### \n";
                int ch;
                cin>>ch;
                if(ch == 1){
                    cout<<"\n ######################### ATM ACCOUNT DEPOSIT SYSTEM ######################### \n";
                    cout<<"\n           The Names Of the accountn holder are : rakesh kharva";
                    cout<<"\n                The Account Holder's address is : mumbai";
                    cout<<"\n                         The Branch location is : Andheri";
                    cout<<"\n                                 Account number : 5678 \n ";
                    cout<<"\n ############################################################################## \n";
                    cout<<"\n                       present available balance : Rs. 60000";
                    cout<<"\n                  Enter the amount to be deposited Rs. "; 
                    int amount;
                    cin>>amount;
                    cout<<"\n              your new available balance amount is Rs. "<<60000+amount;
                    cout<<"\n \n                                 Thank You!";
                }
            else if(ch == 2){
                cout<<"\n ########################### ATM ACCOUNT WITHDRAWAL ########################### \n";
                cout<<"\n           The Names Of the accountn holder are : rakesh kharva";
                cout<<"\n                The Account Holder's address is : mumbai";
                cout<<"\n                         The Branch location is : Andheri";
                cout<<"\n                                 Account number : 5678 \n ";
                cout<<"\n ############################################################################## \n";
                cout<<"\n               Insufficiant Available Balance in your account.\n";
                cout<<"\n                                  sorry!";
            }
            else if(ch == 3){
                cout<<"\n ########################### ATM ACCOUNT WITHDRAWAL ########################### \n";
                cout<<"\n           The Names Of the accountn holder are : rakesh kharva";
                cout<<"\n                The Account Holder's address is : mumbai";
                cout<<"\n                         The Branch location is : Andheri";
                cout<<"\n                                 Account number : 5678 \n ";
                cout<<"\n ############################################################################## \n";
                cout<<"\n                            Available balance Rs. 60000 \n";
                cout<<"\n ############################################################################## \n";
            }
            else if(ch == 0){
                cout<<"\n please recive your card!!";
            }
        }
    }
}