// Basic Input/Output
//  o Write a C++ program that accepts user input for their name and age and then displays a personalized greeting.
//  o Objective : Practice input/output operations using cin and cout.

#include<iostream>
using namespace std;
int main(){
    string name;
    int age;

    cout<<"\n enter the name : ";
    cin>>name;
    cout<<"\n enter the age : ";
    cin>>age;

    cout<<"\n name : "<<name<<"\n age : "<<age;
}