//Convert school’s name in abbreviated form

#include<stdio.h>
#include<ctype.h>
int main(){
    char schoolname[100];
    int length,i=1;
    printf("enter the name of the school : ");
    fgets(schoolname, sizeof(schoolname), stdin);
    
    printf("Abbreviated Form: ");

    if (schoolname[0] != ' ') {
        printf("%c", toupper(schoolname[0]));
    }    


    for(i=1;schoolname[i]!='\0';i++){
        if(schoolname[i-1]==' ' && schoolname[i]!=' '  && schoolname[i]!='\n'){
            printf("%c",toupper(schoolname[i]));
        }
    }
}