//Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("\n enter first number : ");
    scanf("%d",&num1);
    printf("\n enter second number : ");
    scanf("%d",&num2);

    sum=num1+num2;

    printf("\n sum : %d + %d = %d",num1,num2,sum);
    printf("\n size of sum in bytes : %d",sizeof(sum));
}