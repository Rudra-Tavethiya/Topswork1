// Matrix Addition
// Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.
// Challenge : Extend the program to work with 3x3 matrices and matrix multiplication.

#include<stdio.h>
int main(){
    int i,j,k,s;
    int mat1[200][200],mat2[200][200],mul[200][200];

    printf("\n enter '1' for 2x2 matrix");
    printf("\n enter '2' for 3x3 matrix\n");
    scanf("%d",&s);

    if(s==2){
        printf("\n enter the values of first 2x2 matrix");
        for(i=0;i<2;i++){
            printf("\n");
            for(j=0;j<2;j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\n enter the values of second 2x2 matrix");
        for(i=0;i<2;i++){
            printf("\n");
            for(j=0;j<2;j++){
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("\n printing the first 2x2 matrix");
        for(i=0;i<2;i++){
            printf("\n");
            for(j=0;j<2;j++){
                printf("%d\t",mat1[i][j]);
            }
        }
        printf("\n printing the first 2x2 matrix");
        for(i=0;i<2;i++){
            printf("\n");
            for(j=0;j<2;j++){
                printf("%d\t",mat2[i][j]);
            }
        }

        printf("\n addition of two matrix :");
        for(i=0;i<2;i++){
            printf("\n");
            for(j=0;j<2;j++){
                printf("%d\t",mat1[i][j]+mat2[i][j]);
            }
        }

        printf("\n multiplication of two matrix : ");
        for(i=0;i<2;i++){
            printf("\n");
            for(j=0;j<2;j++){
                for(k=0;k<2;k++){
                    mul[i][j]+=mat1[i][k]*mat2[k][j];
                }
                printf("%d\t",mul[i][j]);
            }
        }
    }

    if(s==3){
        printf("\n enter the values of first 3x3 matrix");
        for(i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\n enter the values of second 3x3 matrix");
        for(i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("\n printing the first 3x3 matrix");
        for(i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                printf("%d\t",mat1[i][j]);
            }
        }
        printf("\n printing the first 3x3 matrix");
        for(i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                printf("%d\t",mat2[i][j]);
            }
        }

        printf("\n addition of two matrix :");
        for(i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                printf("%d\t",mat1[i][j]+mat2[i][j]);
            }
        }

        printf("\n multiplication of two matrix : ");
        for(i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                for(k=0;k<3;k++){
                    mul[i][j]+=mat1[i][k]*mat2[k][j];
                }
                printf("%d\t",mul[i][j]);
            }
        }
    }

    if(s!=2 && s!=3){
        printf("\n enter valid size of matrix");
    }
}