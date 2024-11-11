//Calculate person’s insurance premium based on salary

#include<stdio.h>
int main(){
    float salary,insurance=0;
    printf("\n Enter your salary amount : ");
    scanf("%f",&salary);

    if(salary<=30000){
        insurance=salary*0.02;
    }
    else if(salary<=50000){
        insurance=salary*0.03;
    }
    else{
        insurance=salary*0.05;
    }

    printf("\n your insurance premium according to your salary %f is : %.2f",salary,insurance);
}