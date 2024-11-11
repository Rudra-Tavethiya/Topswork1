//Find Area of Square formula : a = a2

#include<stdio.h>
int area(int a){
    printf("\n area of the squre is : %d",a*a);
}
int main(){
    int a;
    printf("\n enter length of squre : ");
    scanf("%d",&a);
    area(a);
}