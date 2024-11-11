//WAP to Find Area And Circumference of Circle

#include<stdio.h>
float area(float r){
    float res = 3.14*r*r;
    printf("\n area of the circle is : %.2f",res);
}
float circumference(float r){
    float res = 2*3.14*r;
    printf("\n circumference of the circle is : %.2f",res);
}
int main(){
    float R;
    printf("\n Enter the radius of circle : ");
    scanf("%f",&R);
    area(R);
    circumference(R);
}