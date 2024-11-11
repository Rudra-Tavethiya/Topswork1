//Convert years into days and months


#include<stdio.h>
int main(){
    float days,months,years;
    printf("\n Enter years : ");
    scanf("%f",&years);

    months=years*12;
    days=years*365;
    
    printf("\n months in turms of years : %.2f",months);
    printf("\n days in turms of years : %.2f",days);
}