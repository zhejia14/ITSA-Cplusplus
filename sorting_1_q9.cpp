#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main(){
    int counter0=0,counter1=0;
    string in;
    while(getline(cin,in)){
        for(int i=0;i<in.length();i++){
            if(in[i]=='0') counter0++;
            else counter1++;
        }
        for(int i=0;i<counter1;i++)cout<<'1';
        for(int i=0;i<counter0;i++)cout<<'0';
        cout<<endl;
        counter0=0;counter1=0;
    }
    return 0;
}
