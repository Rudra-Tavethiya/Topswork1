//Find Area of Cube formula : a = 6a2

#include<stdio.h>
int area(int a){
    printf("\n area of the cube is : %d",6*a*a);
}
int main(){
    int a;
    printf("\n enter the lenght of cube : ");
    scanf("%d",&a);
    area(a);
}