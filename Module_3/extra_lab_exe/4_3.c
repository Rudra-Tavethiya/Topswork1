// Sum of Array Elements
// Write a C program that takes N numbers from the user and stores them in an array. 
// The program should then calculate and display the sum of all array elements.
// Challenge : Modify the program to also find the average of the numbers.

#include<stdio.h>
int main(){
    int n,i,sum=0,ave;

    printf("\n enter the limit of number : ");
    scanf("%d",&n);

    int arr[n];

    printf("\n enter the array elements : ");
    for(i=0;i<n;i++){
        printf("\n enter array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n printing array elements : ");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
        sum+=arr[i];
    }   
    ave=sum/n;
    
    printf("\n sum of every elemet is : %d",sum);
    printf("\n average elemet is : %d",ave);

}