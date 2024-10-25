#include<stdio.h>
int circumference(int a,int b,int c){
    printf("\n circumference of triangle is : %d",a+b+c);
}
int main(){
    int a,b,c;
    printf("\n Enter the length of traingle's first side : ");
    scanf("%d",&a);
    printf("\n Enter the length of traingle's second side : ");
    scanf("%d",&b);
    printf("\n Enter the length of traingle's third side : ");
    scanf("%d",&c);
    circumference(a,b,c);
}