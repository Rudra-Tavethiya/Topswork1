// Calculate compound interest (Compound Interest formula:
// a.	Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// b.	Compound Interest = Amount – P

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