//29.	Convert minutes into seconds and hours

#include<stdio.h>
int main(){
    float sec,min,hour;
    printf("\n Enter minutes : ");
    scanf("%f",&min);

    sec=min*60;
    hour=min/60;

    printf("\n secondes in turms of minutes : %0.2f",sec);
    printf("\n hous in turms of minutes : %0.2f",hour);
}