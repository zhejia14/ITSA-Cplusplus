#include <iostream>
using namespace std;

int main(){
    int matrix1col,matrix2col,matrix1row,matrix2row;
    cin>>matrix1row>>matrix1col;
    int matrix1[matrix1row][matrix1col];
    for(int i=0;i<matrix1row;i++){
        for(int j=0;j<matrix1col;j++){
            cin>>matrix1[i][j];
        }
    }
    cin>>matrix2row>>matrix2col;
    int matrix2[matrix2row][matrix2col];
    for(int i=0;i<matrix2row;i++){
        for(int j=0;j<matrix2col;j++){
            cin>>matrix2[i][j];
        }
    }
    int matrix3[matrix1row][matrix2col];
    for(int i=0;i<matrix1row;i++){
        for(int j=0;j<matrix2col;j++){
            matrix3[i][j]=0;
            for(int k=0;k<matrix1col;k++){
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
        }
    }
     for(int i=0;i<matrix1row;i++){
        for(int j=0;j<matrix2col;j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
     }

    return 0;
}
