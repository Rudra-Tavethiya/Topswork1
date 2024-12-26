// Pascal’s Triangle
// Write a C program that generates Pascal’s Triangle up to N rows using loops.
// Challenge : Implement the same program using a recursive function.


#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number for Pascal's Triangle : ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        int value=1;
        for(j=0;j<=i;j++){
            printf("%d ",value);
            value=value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}