//Find area of Rectangle Formula : A=wl

#include<stdio.h>
int area(int l,int w){
    printf("\n area of rectangle is : %d",l*w);
}
int main(){
    int l,w;
    printf("enter the lenght of : ");
    scanf("%d",&l);
    printf("enter the width of : ");
    scanf("%d",&w);
    area(l,w);
}