#include<stdio.h>
int main(){
    float salary,insurance,loan;
    printf("\n Enter your salary amount : ");
    scanf("%f",&salary);

    insurance=salary*0.10;
    loan=salary*0.10;
    
    printf("\n your insurance premium is : %.2f",insurance);
    printf("\n your loan investment is  : %.2f",loan);
    printf("\n your remaining salary is : %.2f",salary-insurance-loan);
}