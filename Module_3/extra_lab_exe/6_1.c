// String Reversal
// Write a C program that takes a string as input and reverses it using a function.
// Challenge : Write the program without using built-in string handling functions.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    printf("\n enter string : ");
    scanf("%s",&str);    

    int i,j=0;
    char temp;

    while (str[j] != '\0') {
        j++;
    }
    for(i=0;i<j;i++){
        rev[i] = str[j-1-i];
    }
    rev[j]='\0';
    
    printf("\n reversed string without using function : %s",rev);
}