// File Handling in C
// LAB EXERCISE: Write a C program to create a file, write a string into it, close the file,
//               then open the file again to read and display its contents.


#include<stdio.h>
int main(){
    char str[50];
    printf("\n Enter string : ");
    gets(str);
    FILE *ptr;
    ptr=fopen("D:\\Topswork1\\Module_3\\new_pdf\\data.txt","w+");
    if(ptr==NULL){
        printf("\n File not created.");
    }
    else{
        printf("\n File created.");
        fprintf(ptr,"%s",str);
    }
    fclose(ptr);
    printf("\n Data inserted successfully.");
}