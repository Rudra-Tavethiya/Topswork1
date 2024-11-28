// Multiplication Table
// Write a C program that takes an integer input from the user and prints its multiplication table using a for loop.
// Challenge : Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include<stdio.h>
int main(){
    int num,i,range;
    printf("\n enter the number : ");
    scanf("%d",&num);
    printf("\n enter the range of multiplication range 1 to : ");
    scanf("%d",&range);

    printf("\n printing the multiplication table : "); 
    for(i=1;i<=range;i++){
        printf("\n %d   x   %d   =   %d",num,i,num*i);
    }
}