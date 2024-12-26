// Simple Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide).
//   The main function should call these based on user input.
//  o Objective : Practice defining and using functions in C++.


#include<iostream>
using namespace std;
int add(int n1,int n2){
    cout<<"\n Addition : "<<n1<<" + "<<n2<<" = "<<n1+n2; 
}
int sub(int n1,int n2){
    cout<<"\n Substraction : "<<n1<<" - "<<n2<<" = "<<n1-n2;
}
int mul(int n1,int n2){
    cout<<"\n Multiplicatiion : "<<n1<<" x "<<n2<<" = "<<n1*n2;
}
int divi(int n1,int n2){
    if (n2 != 0) {
            cout<<"\n Division : "<<n1<<" / "<<n2<<" = "<<n1/n2;
        } else {
            cout<<"\n Error : Division by zero is undefined.";
        }
}
int main(){
    int choice,n1,n2;
    cout<<"\n enter the '1' for addition of two number";
    cout<<"\n enter the '2' for substracion of two number";
    cout<<"\n enter the '3' for multiply of two number";
    cout<<"\n enter the '4' for division of two number";
    cout<<"\n enter the choice : ";
    cin>>choice;
    cout<<"\n enter two number : ";
    cin>>n1>>n2;
    if(choice==1){
        add(n1,n2);
    }
    else if(choice==2){
        sub(n1,n2);
    }
    else if(choice==3){
        mul(n1,n2);
    }
    else if (choice==4){
        divi(n1,n2);
    }
}