// Write a C program to demonstrate pointer usage. 
// Use a pointer to modify the value of a variable and print the result.

#include<stdio.h>
int main(){
    int *ptr,num;
    printf("\n enter the number : ");
    scanf("%d",&num);

    ptr=&num;
    printf("\n initial value of num %d : %p",num,ptr);
    printf("\n value at pointer : %d",*ptr);

}