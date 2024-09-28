#include<stdio.h>
int main(){
    int a,b,c,circumference;
    printf("\n Enter the length of traingle's first side : ");
    scanf("%d",&a);
    printf("\n Enter the length of traingle's second side : ");
    scanf("%d",&b);
    printf("\n Enter the length of traingle's third side : ");
    scanf("%d",&c);
    circumference = a + b + c;
    printf("\n circumference of traingle is : %d",circumference);
}