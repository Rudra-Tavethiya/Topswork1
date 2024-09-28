#include<stdio.h>
int main(){
    int R,area,circumference;
    printf("\n Enter the radius of circle : ");
    scanf("%d",&R);
    area=3.14*R*R;
    printf("\n The Area of circle is : %d",area);
    circumference=2*3.14*R;
    printf("\n circumference of circle is : %d",circumference);
}