//Find circumference of Rectangle formula : C = 4 * a

#include<stdio.h>
int circumference(int l,int w){
    printf("\n circumference of rectangle is : %d",2*(l+w));
}
int main(){
    int l,w;
    printf("\n Enter the length of rectangle : ");
    scanf("%d",&l);
    printf("\n Enter the width of rectangle : ");
    scanf("%d",&w);
    circumference(l,w);
}