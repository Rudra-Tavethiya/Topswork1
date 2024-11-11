//Convert temperature Fahrenheit to Celsius

#include<stdio.h>
int main(){
    float f,c;
    printf("\n Enter temperature in Fahrenheit : ");
    scanf("%f",&f);

    c=(f-32)*5/9;
    
    printf("\n temperature in celsius is : %.2f",c);
}