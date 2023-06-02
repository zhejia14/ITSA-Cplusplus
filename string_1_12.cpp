#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;
    bool flag=false;
    if(a>b)flag=true;
    if(a==b){
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    if(!flag)
        for(int l=a;l<=b;){
            for(int j=0;j<l;j++){
                    cout<<"*";
                }
            cout<<endl;
            l++;
        }
    else
        for(int l=a;l>=b;){
            for(int j=0;j<l;j++){
                    cout<<"*";
                }
            cout<<endl;
            l--;
        }
    return 0;
}
