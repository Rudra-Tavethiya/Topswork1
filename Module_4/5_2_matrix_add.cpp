//  Matrix Addition
//  o Write a C++ program to perform matrix addition on two 2x2 matrices.
//  o Objective : Practice multi-dimensional arrays.


#include<iostream>
using namespace std;
int main(){
    int i,j,mat1[2][2],mat2[2][2];
    cout<<"\n enter the alementes of matrix 1 :  ";
    for(i=0;i<2;i++){
        cout<<endl;
        for(j=0;j<2;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"\n enter the alementes of matrix 2 :  ";
    for(i=0;i<2;i++){
        cout<<endl;
        for(j=0;j<2;j++){
            cin>>mat2[i][j];
        }
    }
    cout<<"\n printing the matrix 1 : ";
    for(i=0;i<2;i++){
        cout<<endl;
        for(j=0;j<2;j++){
            cout<<mat1[i][j]<<" ";
        }
    }
    cout<<"\n printing the matrix 1 : ";
    for(i=0;i<2;i++){
        cout<<endl;
        for(j=0;j<2;j++){
            cout<<mat2[i][j]<<" ";
        }
    }

    cout<<"\n addition of two matrix : ";
    for(i=0;i<2;i++){
        cout<<endl;
        for(j=0;j<2;j++){
            cout<<mat1[i][j]+mat2[i][j]<<" ";
        }
    }
}
