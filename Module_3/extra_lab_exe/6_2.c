// Count Vowels and Consonants
// Write a C program that takes a string from the user and counts the number of vowels and consonants in the string.
// Challenge : Extend the program to also count digits and special characters.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int vowel=0,consonant=0,digit=0,spacial=0,len;

    printf("\n enter string : ");
    scanf("%s",&str);

    len=strlen(str);

    for(int i=0;i<len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowel++;
           }
           else if((str[i]>='a' && str[i]<='z')  ||  (str[i]>='A' && str[i]<='Z')){
            consonant++;
           }
           else if(str[i]>='0' && str[i]<='9'){
            digit++;
           }
           else{
            spacial++;
           }
    }
    printf("\n the number of vowel in string is : %d",vowel);
    printf("\n the number of consonants in string is : %d",consonant);
    printf("\n the number of digits in string is : %d",digit);
    printf("\n the number of spacial character in string is : %d",spacial);
}