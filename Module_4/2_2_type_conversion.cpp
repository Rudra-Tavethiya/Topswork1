//  Type Conversion
//   o Write a C++ program that performs both implicit and explicit type conversions and prints the results.
//   o Objective : Practice type casting in C++.


#include <iostream>
using namespace std;

int main() {
    cout<<"\n implicit coversion : ";
    int i=10;
    char c='a';
    int sum=i+c;
    cout<<"\n sum : "<<i<<" + "<<c<<" = "<<sum;

    cout<<"\n explicit coversion : ";
    float j=10.0;
    float res=j+c+1.0;
    cout<<"\n j = "<<j;
    cout<<"\n c = "<<c;
    cout<<"\n sum : "<<j<<" + "<<c<<" + "<<"1.0"<<" = "<<res;
}