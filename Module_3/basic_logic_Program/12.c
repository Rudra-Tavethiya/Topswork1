//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>
int main(){
    int num,sum;
    printf("\n enter the number of students : ");
    scanf("%d",&num);
    printf("\n if we give 5 apple to each student");
    sum=num*5;
    printf("\n \n number of apple we need is : %d",sum);
}