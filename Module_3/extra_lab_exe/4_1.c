// Maximum and Minimum in Array
// Write a C program that accepts 10 integers from the user and stores them in an array. 
// The program should then find and print the maximum and minimum values in the array.
// Challenge : Extend the program to sort the array in ascending order.

#include<stdio.h>
int main(){
    int arr[10],i,min,max,j,temp;
    printf("\n enter the 10 values of array : ");
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n The 10 integer is : ");
    for(i=0;i<=9;i++){
        printf("%d  ",arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\n the maximum number amoung 10 integr is : %d",max);
    printf("\n the minimum number amoung 10 integr is : %d",min);

    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n The 10 integer in ascending order : ");
    for(i=0;i<=9;i++){
        printf("%d  ",arr[i]);
    }    
}