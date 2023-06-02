#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int main(){
     vector<int> array(5);
    while (true) {
        int judge=0;
        for(int i=0;i<5;i++){
            cin>>array[i];
            judge+=array[i];
        }
        if(judge==0)break;
        sort(array.begin(),array.end(),cmp);
        cout<<array[2]<<endl;
    }
    return 0;
}
