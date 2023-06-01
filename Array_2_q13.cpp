#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;



int main(){
 int matrix1rows, matrix1cols, matrix2rows, matrix2cols;
    cin>>matrix1rows>>matrix1cols;
    int matrix1[matrix1rows][matrix1cols];
    for(int i=0; i<matrix1rows; i++){
        for(int j=0; j<matrix1cols; j++){
            cin>>matrix1[i][j];
        }
    }
    cin>>matrix2rows>>matrix2cols;
    int matrix2[matrix2rows][matrix2cols];
    for(int i=0; i<matrix2rows; i++){
        for(int j=0; j<matrix2cols; j++){
            cin>>matrix2[i][j];
        }
    }
    //matrix addition
    int matrix3[matrix1rows][matrix1cols];
    for(int i=0; i<matrix1rows; i++){
        for(int j=0; j<matrix1cols; j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
}
