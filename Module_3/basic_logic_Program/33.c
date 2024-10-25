#include<stdio.h>
int main(){
    int num;

    printf("\n Enter integer number : ");
    scanf("%d",&num);

    printf("\n first power of number  : %d ^ 1 = %d",num,num);
    printf("\n second power of number : %d ^ 2 = %d",num,num*num);
    printf("\n third power of number  : %d ^ 3 = %d",num,num*num*num);
}