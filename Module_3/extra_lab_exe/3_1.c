// // Prime Number Check
// // Write a C program that checks whether a given number is a prime number or not using a for loop.
// // Challenge : Modify the program to print all prime numbers between 1 and a given number.

#include<stdio.h>
int main(){
    int num,i=1,count=0,j;
    printf("enter number : ");
    scanf("%d",&num);
    while(i<=num){
        if(num%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        printf("\n the given number %d is prime",num);
        }
    else{
        printf("\n the given number %d is not prime",num);
    }
    printf("\n printing the prime numbers between 1 and given number %d : \n",num);
    for(j=1;j<=num;j++){
        count=0;
        for(i=1;i<=num;i++)
        if(j%i==0){
            count++;
        }
        if(count==2){
            printf("%d  ",j);
        }
    }
}