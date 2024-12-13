// Factorial Calculation
// Write a C program that calculates the factorial of a given number using a function.
// Challenge : Implement both an iterative and a recursive version of the factorial function and compare their performance for large numbers


#include<stdio.h>
int fac_recursive(int n){
    if(n==0 || n==1){
        return 1;
    }
    return (n * fac_recursive(n-1));
}
int fac_iterative(int n){
    if(n==0 || n==1){
        return 1;
    }
    int i,sum=1;
    for(i=1;i<=n;i++){
        sum*=i;
    }
    printf("%d",sum);
}

int main(){
    int n;
    printf("\n enter number : ");
    scanf("%d",&n);
    printf("\n printing factorial number by using recursive method : ");
    printf("%d",fac_recursive(n));
    printf("\n printing factorial number by using iterative method : ");
    fac_iterative(n);
}