#include<stdio.h>
int main(){
    int ex1,ex2,ex3,ex4,ex5,average;
    printf("\n enter expence of 1 user : ");
    scanf("%d",&ex1);
    printf("\n enter expence of 2 user : ");
    scanf("%d",&ex2);
    printf("\n enter expence of 3 user : ");
    scanf("%d",&ex3);
    printf("\n enter expence of 4 user : ");
    scanf("%d",&ex4);
    printf("\n enter expence of 5 user : ");
    scanf("%d",&ex5);
    average=(ex1+ex2+ex3+ex4+ex5)/5;
    printf("average of expence is : %d",average);   
}