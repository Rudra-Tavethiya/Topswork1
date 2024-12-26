// Armstrong Number
// Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 =1^3+5^3+3^3).
// Challenge : Write a program to find all Armstrong numbers between 1 and 1000.


#include <stdio.h>
#include <math.h>
int arm(int num) {
    int og=num, sum=0, n=0;
    while(og>0){
        n++;
        og/=10;
    }

    og=num;
    while(og>0){
        int num=og%10;
        sum = sum + round(pow(num, n));
        og/=10;
    }

    return(sum==num);
}

int main() {
    int num;
    printf("\n Enter number : ");
    scanf("%d", &num);

    if(arm(num)){
        printf("\n %d is an Armstrong number. \n", num);
    } 
    else{
        printf("\n %d is not an Armstrong number. \n", num);
    }
    printf("\n Armstrong numbers between 1 and 1000 : ");
    for(int i = 1; i <= 1000; i++){
        if(arm(i)){
            printf("%d  ",i);
        }
    }
}
