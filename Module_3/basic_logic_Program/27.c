#include<stdio.h>
int main(){
    float days,months;
    printf("\n Enter days : ");
    scanf("%f",&days);

    months=days/30;

    printf("\n months in turms of days : %.2f",months);
}