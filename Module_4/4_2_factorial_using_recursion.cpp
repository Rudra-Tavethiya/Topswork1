// Factorial Calculation Using Recursion
//  o Write a C++ program that calculates the factorial of a number using recursion.
//  o Objective : Understand recursion in functions


#include<iostream>
using namespace std;
int fac(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fac(n-1);
}
int main(){
    int n;
    cout<<"\n enter the number : ";
    cin>>n;

    if(n<0){
        cout<<"\n enter the valid number !, enter the positive number for factorial of number.";
    }
    else{
        cout<<"\n factorial of the nummber "<<n<<" : "<<fac(n);
    }
}