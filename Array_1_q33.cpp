#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    int row,col;
    cin>>row>>col;
    while(0!=row+col){
        int matrix[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>matrix[i][j];
            }
        }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                cout<<matrix[j][i]<<" ";
            }
            cout<<endl;
        }
        cin>>row>>col;
    }
    return 0;
}
