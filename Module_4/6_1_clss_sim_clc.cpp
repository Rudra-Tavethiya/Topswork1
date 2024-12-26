// Class for a Simple Calculator
//  o Write a C++ program that defines a class Calculator with functions for addition, subtraction, 
//    multiplication, and division. Create objects to use these functions.
//  o Objective : Introduce basic class structure


#include<iostream>
using namespace std;

class Calculator {
    public: 
    double n1,n2;
    public:
    void add() {
        cout << "Enter two numbers : ";
        cin >> n1 >> n2;
        cout<<"\n Addition : "<<n1<<" + "<<n2<<" = "<<n1+n2; 
    }

    void sub() {
        cout << "Enter two numbers : ";
        cin >> n1 >> n2;
        cout<<"\n Substraction : "<<n1<<" - "<<n2<<" = "<<n1-n2;
    }

    void mul() {
        cout << "Enter two numbers : ";
        cin >> n1 >> n2;
        cout<<"\n Multiplicatiion : "<<n1<<" x "<<n2<<" = "<<n1*n2;
    }

    void div() {
        cout << "Enter two numbers : ";
        cin >> n1 >> n2;
        if (n2 == 0) {
            cout<<"\n Error : Division by zero is undefined.";
        } 
        else {
            cout<<"\n Division : "<<n1<<" / "<<n2<<" = "<<n1/n2;
            
        }
    }
};

int main() {
    Calculator clc; 

    int choice;
 
    cout<<"\n enter the '1' for addition of two number";
    cout<<"\n enter the '2' for substracion of two number";
    cout<<"\n enter the '3' for multiply of two number";
    cout<<"\n enter the '4' for division of two number";
    cout<<"\n enter the choice : ";
    cin>>choice;
    
    if(choice==1){
        clc.add();
    }
    else if(choice==2){
        clc.sub();
    }
    else if(choice==3){
        clc.mul();
    }
    else if(choice==4){
        clc.div();
    }
    else{
        cout << "Invalid operation!" << endl;

    }
}