//  Variables and Constants
//  o Write a C++ program that demonstrates the use of variables and constants. Create variables of different 
//    datatypes and perform operations on them.
//  o Objective : Understand the difference between variables and constants.


#include<iostream>
using namespace std;
int main(){
    int n1=10;
    float n2=6.3;
    double n3=10.56;
    char ch='A';
    string name="Hello";

    const int constant=100;

    int sum = n1 + 20;
    float multiplied = n2 * 2;
    double division = n3 / 3;
    char nextChar = ch + 1;
    string greeting = name + " World!";

    cout<<"\n Integer variable : "<<n1<<"         After addition : "<<sum;
    cout<<"\n Float variable : "<<n2<< "          After multiplication : "<<multiplied;
    cout<<"\n Double variable : "<<n3<<"       After division : "<<division;
    cout<<"\n Character variable : "<<ch<<"        Next character : "<<nextChar;
    cout<<"\n String variable : "<<name<<"       Concatenated : "<<greeting;

    cout<<"\n \n Constant variable : "<<constant<<"\n \n";
}