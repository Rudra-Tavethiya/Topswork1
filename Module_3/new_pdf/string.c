// Write a C program that defines a structure to store a student's details (name, rollnumber, and marks).
// Use an array of structures to store details of 3 students and print them.

#include<stdio.h>
struct student{
    char name[20];
    int rollnumber;
    float marks;
};
int main(){
    int i;
    struct student s[3];
    printf("\n enter the three student details : ");
    for(i=0;i<3;i++){
        printf("\n enter rollnumber : ");
        scanf("%d",&s[i].rollnumber);
        printf("\n enter name : ");
        scanf("%s",&s[i].name);
        printf("\n enter marks : ");
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<3;i++){
       // printf("\n Student : %d",i);
        printf("\n Rollno : %d",s[i].rollnumber);
        printf("\n Name : %s",s[i].name);
        printf("\n Percent : %.2f",s[i].marks);
    }
}