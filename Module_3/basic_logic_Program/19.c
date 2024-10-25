#include<stdio.h>
int main(){
    float P,R,t,amount;
    printf("\n enter principal amount : ");
    scanf("%f",&P);
    printf("\n enter rate of interest : ");
    scanf("%f",&R);
    printf("\n how much time for it (yearly) : ");
    scanf("%f",&t);
    amount=P*(1+R/100)*t;
    printf("\n the total amount : %.2f",amount);
    printf("\n the compaund interest is : %.2f",amount-P);
}