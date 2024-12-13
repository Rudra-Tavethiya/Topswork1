// Word Count
// Write a C program that counts the number of words in a sentence entered by the user.
// Challenge : Modify the program to find the longest word in the sentence.

#include<stdio.h>
#include<string.h>

int main(){
    char sen[1000];
    int len,count=1;
    printf("\n enter the sentance : ");
    gets(sen);

    len=strlen(sen);

    for(int i=0;sen[i]!='\0';i++){
        if(sen[i]==' '){
            count++;
        }
    }
    printf("\n the word in the sentance is : %d",count);
}