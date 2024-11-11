//accept 5 employees name and salary and count average and total salary

#include<stdio.h>
int main(){
    int salary[5],Tsalary=0,Asalary;
    char name[5];
    
    for(int i=1;i<=5;i++){
        printf("\n enter name of employ %d : ",i);
        scanf("%s",&name[i]);
        printf("\n enter salary of %d : ",i);
        scanf("%d",&salary[i]);

        Tsalary+=salary[i];
    }
    Asalary=Tsalary/5;

    printf("\n total salary of all employ : %d",Tsalary);
    printf("\n average salary of all employ : %d",Asalary);
}