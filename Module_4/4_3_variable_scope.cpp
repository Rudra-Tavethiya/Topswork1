// Variable Scope
//  o Write a program that demonstrates the difference between local and global variables in C++.Use functions to show scope.
//  o Objective : Reinforce the concept of variable scope.



#include<iostream>
using namespace std;

int global_var=10;                // global variabal

int demonstrates_local_var(){
    int local_var=20;             // local variabal
    cout<<"\n local variable : "<<local_var;
    cout<<"\n globle variable : "<<global_var;
    global_var+=5;
}

int demonstrates_global_var(){
    int local_var=20;
    cout<<"\n globle variable : "<<global_var;
    global_var*=2;
}

int main(){
    cout<<"\n globle variable : "<<global_var;
    
    cout<<"\n demonstrates local variable : ";
    demonstrates_local_var();
    
    cout<<"\n after calling demonstrates local variable : ";
    cout<<"\n globle variable : "<<global_var;

    cout<<"\n demonstrates global variable : ";
    demonstrates_global_var();

    cout<<"\n after calling demonstrates global variable : ";
    cout<<"\n globle variable : "<<global_var;
}