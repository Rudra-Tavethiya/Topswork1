//find the ascci value from given number 

#include<stdio.h>
int main(){
    int num;
    printf("enter the number for ascii value : ");
    scanf("%d",&num);

    if (num >= 0 && num <= 127) {
        printf("The ASCII character for %d is: %c\n", num, (char)num);
    } 
    else {
        printf("Invalid input! Please enter a number between 0 and 127.\n");
    }
}