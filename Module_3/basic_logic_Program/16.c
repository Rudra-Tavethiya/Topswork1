//Convert country’s name in charabbreviate form
#include <stdio.h>
#include <ctype.h>

int main() {
    char contry[100];
    printf("Enter the school name: ");
    fgets(contry, sizeof(contry), stdin);

    printf("charabbreviated Form: ");

    if (contry[0] != ' ') {
        printf("%c", toupper(contry[0]));
    }    


    for(int i=1;contry[i]!='\0';i++){
        if(contry[i-1]==' ' && contry[i]!=' '  && contry[i]!='\n'){
            printf("%c",toupper(contry[i]));
        }
    }
}
