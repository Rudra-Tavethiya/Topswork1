// Nested Control Structures
//  o Write a program that prints a right-angled triangle using stars(*) with a nested loop.
//  o Objective : Learn nested control structures.



#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"\n enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<endl;
        for(k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
    }
}