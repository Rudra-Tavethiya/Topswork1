//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include<stdio.h>
int main(){
    int num1,num2;
    printf("\n Enter number 1 : ");
    scanf("%d",&num1);
    printf("\n Enter number 2 : ");
    scanf("%d",&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("\n after swap number 1 : %d",num1);
    printf("\n after swap number 2 : %d",num2);
}