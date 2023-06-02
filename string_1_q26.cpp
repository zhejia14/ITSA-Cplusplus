#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main(){
    string str;
    getline(cin,str);
    int arr[16];
    if(str.length()!=16){cout<<"Error"<<endl; return 0;}
    else{
        for(int i=0;i<str.length();i++){
            if(i%2==0)arr[i]=int(str[i])-48;
            else arr[i]=(int(str[i])-48)*2;
        }

        for(int i=0;i<16;i++){
            
            if(arr[i]>=10){
                int tmp=arr[i];
                arr[i]=tmp%10;
                tmp/=10;
                arr[i]+=tmp;
            }
            
        }
        int sum=0;
        for(int i=0;i<16;i++){
            sum+=arr[i];
        }
        if(sum%10==0)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
