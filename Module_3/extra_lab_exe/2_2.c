// Number Comparison
// Write a C program that takes three numbers from the user and determines :
//       o The largest number.
//       o The smallest number.
// Challenge : Solve the problem using both if-else and switch-case statements. 

#include<stdio.h>
int main(){
    int n1,n2,n3;
    int smallest,largest,choice=1;

    printf("\n enter three number : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>=n2 && n1>=n3){
        largest = n1;
    }
    else if(n2>=n1 && n2>=n3){
        largest = n2;
    }
    else{
        largest = n3;
    }

    if(n1<=n2 && n1<=n3){
        smallest = n1;
    }
    else if(n2<=n1 && n2<=n3){
        smallest = n2;
    }
    else{
        smallest = n3;
    }
    printf("\n usnig if-else statement : ");
    printf("\n largest number : %d",largest);
    printf("\n smallest number : %d \n",smallest);
    
    printf("\n using switch-case statement : ");
    switch(choice){
        case 1: 
            (n1>=n2 && n1>=n3) ? (largest = n1) : (n2>=n1 && n2>=n3) ? (largest = n2) : (largest = n3) ;
            printf("\n largest number : %d",largest);
            (n1<=n2 && n1<=n3) ? (smallest = n1) : (n2<=n1 && n2<=n3) ? (smallest = n2) : (smallest = n3) ;
            printf("\n smallest number : %d",smallest);
            break;
    }
}