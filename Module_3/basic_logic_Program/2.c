// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
int show(int a,char ch,int b,int res){
    printf("%d %c %d = %d",a,ch,b,res);
}
int modulo(int a,int b){
    show(a,'%',b,a%b);
}

int main(){
    int num1,num2,choice;
    do{
    printf("\n Enter '1' for Addition of two numbers");
    printf("\n Enter '2' for Subtraction of two numbers");
    printf("\n Enter '3' for Multiplication of two numbers");
    printf("\n Enter '4' for Division of two numbers");
    printf("\n Enter '5' for Modulo of two numbers");
    printf("\n Enter choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter numbers for addition:");
        scanf("%d %d",&num1,&num2);
        printf("\n %d + %d = %d",num1,num2,num1+num2);
        break;
    case 2:
        printf("Enter numbers for subtraction:");
        scanf("%d %d",&num1,&num2);
        printf("\n %d - %d = %d",num1,num2,num1-num2);
        break;
    case 3:
        printf("Enter numbers for multiplication :");
        scanf("%d %d",&num1,&num2);
        printf("\n %d * %d = %d",num1,num2,num1*num2);
        break;
    case 4:
        printf("Enter numbers for division :");
        scanf("%d %d",&num1,&num2);
        printf("\n %d / %d = %d",num1,num2,num1/num2);
        break;
    case 5:
        printf("Enter numbers for modulo :");
        scanf("%d %d",&num1,&num2);
        modulo(num1,num2);
        break;
    default:
        printf("\n Enter valid choice");
        break;
    }
    }while(choice<=5);
}