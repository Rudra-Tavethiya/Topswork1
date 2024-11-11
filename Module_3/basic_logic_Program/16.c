//Convert country’s name in charabbreviate form
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void abbreviateSchoolName(char schoolName[]) {
    // Print the first character in uppercase if it’s a letter
    if (isalpha(schoolName[0])) {
        printf("%c", toupper(schoolName[0]));
    }

    // Loop through the string and find spaces, then print the next character if it’s a letter
    for (int i = 1; i < strlen(schoolName); i++) {
        if (schoolName[i] == ' ' && isalpha(schoolName[i + 1])) {
            printf("%c", toupper(schoolName[i + 1]));
        }
    }
    printf("\n");
}

int main() {
    char schoolName[100];
    printf("Enter the school name: ");
    fgets(schoolName, sizeof(schoolName), stdin);


    
    printf("Abbreviated form: ");
    abbreviateSchoolName(schoolName);
    return 0;
}
