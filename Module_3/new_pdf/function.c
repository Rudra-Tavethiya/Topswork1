// Write a C program that calculates the factorial of a number using a function.
// Include function declaration, definition, and call.

#include<stdio.h>
int factorial(int n){             //function declaration
    int i,f=1;                    //function defination
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("\n the fectorial of number %d is : %d",n,f);
}
int main(){
    int num;
    printf("\n enter number : ");
    scanf("%d",&num);
    factorial(num);               //calling a function
}