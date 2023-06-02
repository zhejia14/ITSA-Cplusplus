#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    int map[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin>>map[i][j];
        }
    }

    if(map[0][0] == map[1][1] && map[1][1] == map[2][2]){cout<<"True"<<endl; return 0;}
    else if(map[0][2] == map[1][1] && map[0][2] == map[2][0]){cout<<"True"<<endl; return 0;}

    for(int i=0; i<3; i++) {
        if(map[i][0] == map[i][1] && map[i][0] == map[i][2]){cout<<"True"<<endl; return 0;}
        else if(map[0][i] == map[1][i] && map[0][i] == map[2][i]){cout<<"True"<<endl; return 0;}
    }
    cout<<"False"<<endl;
    return 0;
}
