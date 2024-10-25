#include<stdio.h>
int main(){
    int expence[5],Texpence=0,Aexpence;
    
    for(int i=1;i<=5;i++){
        printf("\n enter expence of employ %d : ",i);
        scanf("%d",&expence[i]);

        Texpence+=expence[i];
    }
    Aexpence=Texpence/5;

    printf("\n total expence of all employ : %d",Texpence);
    printf("\n average expence of all employ : %d",Aexpence);
}