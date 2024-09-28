#include<stdio.h>
int main(){
    int l,h,w,a;
    printf("\n Enter the length of rectangle prisum : ");
    scanf("%d",&l);
    printf("\n Enter the hight of rectangle prisum : ");
    scanf("%d",&h);
    printf("\n Enter the width of rectangle prisum : ");
    scanf("%d",&w);
    a = 2*(l*h + h*w + w*l);
    printf("\n area of rectangle prisum is : %d",a);
}