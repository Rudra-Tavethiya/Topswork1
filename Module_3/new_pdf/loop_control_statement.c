#include<stdio.h>
int main(){
    int i;
    printf("\n for break statement : ");
    for(i=1;i<=7;i++){
        if(i==5){
            break;
        }
        printf("%d  ",i);
    }
    
    printf("\n for continue statement : ");
    for(i=1;i<=7;i++){
        if(i==3){
            continue;
        }
        printf("%d  ",i);
    }
}