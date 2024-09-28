#include<stdio.h>
int main(){
    int l,w,circumference;
    printf("\n Enter the length of rectangle : ");
    scanf("%d",&l);
    printf("\n Enter the width of rectangle : ");
    scanf("%d",&w);
    circumference=2*(l+w);
    printf("\n circumference of rectangle is : %d",circumference);
}