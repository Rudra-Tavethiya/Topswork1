// Sum of Digits
// Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.
// Challenge : Extend the program to reverse the digits of the number.

#include<stdio.h>
int main(){
    int num,rev=0,rem,sum=0;
    printf("\n ennter the number : ");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("\n sum of the number is : %d",sum);
    printf("\n reverse of the numbr is : %d",rev);

}