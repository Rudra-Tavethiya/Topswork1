#include<stdio.h>
int main(){
    int P,R,t,amount;
    printf("\n enter principal amount : ");
    scanf("%d",&P);
    printf("\n enter rate of interest : ");
    scanf("%d",&R);
    printf("\n how much time for it : ");
    scanf("%d",&t);
    amount=P*(1+R/100)*t;
    printf("\n the total amount : %d",amount);
    printf("\n the compaund interest is : %d",amount-P);
}