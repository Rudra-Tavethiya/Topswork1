//Convert school’s name in abbreviated form

#include<stdio.h>
int main(){
    char schoolname[50];
    int length,i=1;
    printf("enter the name of the school : ");
    scanf("%s",&schoolname);

    for(i=0;i<strlen(schoolname);i++){
        if(schoolname[i]==' ' && schoolname[i+1] != '\0'){
            printf("\n %c",schoolname[i+1]);
        }
    }
}