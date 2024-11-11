//WAP to convert years into days and days into years

#include<stdio.h>
int main(){
    float days,years;
    int choice;
    do{
        printf("\n Enter '1' for convert years into days");
        printf("\n Enter '2' for convert days into years");

        printf("\n Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1 : printf("Enter years : ");
                     scanf("%f",&years);
                     days=years*365;
                     printf("\n days in turms of years : %.2f\n",days);
                     break ;

            case 2 : printf("Enter days : ");
                     scanf("%f",&days);
                     years=days/365;
                     printf("\n days in turms of years : %.2f\n",years);
                     break ;
            default : printf("\n Enter valid choice");
                      break;

        }
    }
    while(choice<=2);
}