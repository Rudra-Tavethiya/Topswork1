//Convert kilometers into meters

#include<stdio.h>
int main(){
    float m,km;
    printf("\n Enter kilometers : ");
    scanf("%f",&km);

    m=km*1000;

    printf("\n metrs in turms of kilometes : %.2f",m);
}