// check number properties
// Write a C program that takes an integer from the user and checks the following using different operators :
//       o Whether the number is even or odd.
//       o Whether the number is positive, negative, or zero.
//       o Whether the number is a multiple of both 3 and 5.

#include<stdio.h>
int main(){
    int choice,num1;
    float num2;
    do{
    printf("\n Enter '1' for check number is even or odd");
    printf("\n Enter '2' for check number is positive, negative, or zero");
    printf("\n Enter '3' for check number is a multiple of both 3 and 5");
    printf("\n entr the choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1 : printf("\n enter the numbers to check : ");
                 scanf("%d",&num1);
                 if(num1%2 == 0){
                    printf("\n the given number %d is even",num1);
                 }
                 else{
                    printf("\n the given number %d is odd",num1);
                 }
                 break;

        case 2 : printf("\n enter the numbers to check : ");
                 scanf("%f",&num2);
                 if(num2>0){
                    printf("\n the given number %.2f is positive",num2);
                 }
                 else if(num2<0){
                    printf("\n the given number %.2f is negetive",num2);
                 }
                 else{
                    printf("\n the given number zero");
                 }
                 break;

        case 3 : printf("\n enter the numbers to check : ");
                 scanf("%d",&num1);
                 if(num1%3 == 0 && num1%5 == 0){
                    printf("\n the given number %d is multiple of both 3 and 5",num1);
                 }
                 else{
                    printf("\n the given number %d is not multiple of both 3 and 5",num1);
                 }
                 break;

        default: printf("\n Enter valid choice");
                 break;
    }
    }while(choice<=3);
}