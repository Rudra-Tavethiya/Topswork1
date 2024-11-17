#include<stdio.h>
int main(){
    int i;

    printf("\n using while loop    : ");
    i=1;
    while(i<=10){
        printf("%d  ",i);
        i++;
    }

    printf("\n using for loop      : ");
    for(i=1;i<=10;i++){
        printf("%d  ",i);
    }

    printf("\n using do-while loop : ");
    i=1;
    do{
        printf("%d  ",i);
        i++;
    }
    while(i<=10);

}