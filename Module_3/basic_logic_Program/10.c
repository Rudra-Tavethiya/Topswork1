#include<stdio.h>
int area(int l,int h,int w){
    printf("\n area of traingle prisum is : %d",l*h + h*w + w*l);
}
int main(){
    int l,h,w;
    printf("\n Enter the length of rectangle prisum : ");
    scanf("%d",&l);
    printf("\n Enter the hight of rectangle prisum : ");
    scanf("%d",&h);
    printf("\n Enter the width of rectangle prisum : ");
    scanf("%d",&w);
    area(l,h,w);
}