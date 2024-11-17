// Write a C program to check if a number is even or odd using an if-else statement. 

#include<stdio.h>
int main(){
    int num;
    printf("\n enter the number : ");
    scanf("%d",&num);
    if(num%2==0){
        printf("\n given number is even");
    }
    else{
        printf("\n given number is odd");
    }

// Extend the program using a switch statement to display the month name based on the 
// user’s input (1 for January, 2 february, etc.)

    int month;
    printf("\n enter number for month : ");
    scanf("%d",&month);
    switch (month) {
    case 1:
       printf("\n january");
    break;
    case 2:
       printf("\n february");
       break;
    case 3:
       printf("\n march");
    break;
    case 4:
       printf("\n april");
    break;
    case 5:
       printf("\n may");
    break;
    case 6:
       printf("\n june");
    break;
    case 7:
       printf("\n july");
    break;
    case 8:
       printf("\n augest");
    break;
    case 9:
       printf("\n september");
    break;
    case 10:
       printf("\n octomber");
    break;
    case 11:
       printf("\n november");
    break;
    case 12:
       printf("\n december");
    break;
    default:
       printf("\n enter valid number of month");
    }
}