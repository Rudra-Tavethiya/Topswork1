// Fibonacci Sequence
// Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.
// Challenge : Modify the program to calculate the Nth Fibonacci number using both iterative and recursive methods. Compare their efficiency.

#include<stdio.h>
int fib_recursive(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fib_recursive(n-1)+fib_recursive(n-2));
    }
}

int fib_iterative(int n){
    if(n==0){
        printf("0");
    }
    else if(n==1){
        printf("0   1");
    }
    else{
        int n1=0,n2=1,temp,count=2;
        printf("%d  %d  ",n1,n2);
        while(count<=n){
            temp=n1+n2;
            n1=n2;
            n2=temp;
            printf("%d  ",temp);
            count++;
        }
    }
}
int main(){
    int n,choice;
    printf("\n enter the number : ");
    scanf("%d",&n);
    printf("\n printing fibonacci sequence using recursive method : ");
    for(int i=0;i<=n;i++){
        printf("%d  ",fib_recursive(i));
    }

    printf("\n printing fibonaccci sequence using iterative method : ");
    fib_iterative(n);
}