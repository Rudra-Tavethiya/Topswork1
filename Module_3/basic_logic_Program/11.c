#include<stdio.h>
int circumference(int l){
    printf("\n circumference of squre is : %d",4*l);
}
int main(){
    int l;
    printf("\n Enter the length of squre : ");
    scanf("%d",&l);
    circumference(l);
}