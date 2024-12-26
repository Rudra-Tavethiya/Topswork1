// String Palindrome Check
//  o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).
//  o Objective : Practice string operations.



#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int i,temp=0;
    cout<<"\n enter string for check the palindrome : ";
    cin>>str;

    int len=str.length();
    
    for(i=0;i<=len/2;i++){
        if(str[i] != str[len-1-i]){
            temp=1;
            break;
        }
    }

    if(temp==1){
        cout<<"\n the given string is not a palindrome.";
    }
    else{
        cout<<"\n the given string is a palindrome.";
    }
}