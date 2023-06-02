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
    vector<int> array;
    array.push_back(1);
    array.push_back(6);
    array.push_back(9);
    array.push_back(23);
    array.push_back(56);
    array.push_back(95);
    int in;
    cin>>in;
    array.push_back(in);

    sort(array.begin(),array.end(),cmp);

    for(int i=0;i<7;i++){
        if(i!=6)cout<<array[i]<<",";
        else cout<<array[i]<<endl;
    }
    return 0;
}
