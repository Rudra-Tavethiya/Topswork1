//Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
float area(int b,int h){
    printf("\n area of triangle is : %.2f",0.5*b*h);
}
int main(){
    int b,h;
    printf("\n enter the base of cube : ");
    scanf("%d",&b);
    printf("\n enter the height of cube : ");
    scanf("%d",&h);
    area(b,h);
}