//Calculate person’s Annual salary 

#include<stdio.h>
int main(){
    int Msalary,Asalary;
    printf("\n Enter your monthly salary : ");
    scanf("%d",&Msalary);

    Asalary=Msalary*12;

    printf("\n your annuual salary according to monthly salary %d is : %d",Msalary,Asalary);
}