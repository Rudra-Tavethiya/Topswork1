//Write a C program that stores 5 integers in a one-dimensional array and prints them.
//Extend this to handle a two-dimensional array(3x3matrix) and calculate the sum of all elements.

#include<stdio.h>
int main(){
    //one-dimensional array
    int arr[5];
    printf("\n enter 5 integers for 1D array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d  ",arr[i]);    
    }

    //two-dimensional array
    int matrix[3][3],sum=0;
    printf("\n enter the 9 integers for matrix 3x3 : ");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
            sum+=matrix[i][j];
        }
    }
    printf("\n printing the matrix : ");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d  ",matrix[i][j]);
        }
    }
    printf("\n the sum of matrix's elements ia : %d",sum);
}