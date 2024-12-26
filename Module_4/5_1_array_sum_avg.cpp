//  Array Sum and Average
//  o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
//  o Objective : Understand basic array manipulation


#include<iostream>
using namespace std;
int main(){
    int arr[20],sum=0,avg=0;
    cout<<"\n enter the 5 numbers : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/5;
    cout<<"\n the sum of all integer : "<<sum;
    cout<<"\n the average of all integer : "<<avg;
}