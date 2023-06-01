#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;



int main(){
 int row ,col;
 cin >> row >> col;
 int arr[row][col];
 for(int num = row*col; num > 0;){
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                arr[i][j]=num;
                num--;
            }
        }
    }
    //print arr
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
