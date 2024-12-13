// Palindrome Check
// Write a C program that takes a number as input and checks whether it is a palindrome using a function.
// Challenge : Modify the program to check if a given string is a palindrome.

#include<stdio.h>
int palindrome(int n){
    int rev=0,rem;
    int og=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(og==rev){
        printf("\n given number %d is palindrome",og);
    }
    else{
        printf("\n given number %d is not palindrome",og);
    }
}
int main(){
    int num;
    printf("\n enter number : ");
    scanf("%d",&num);
    palindrome(num);
}