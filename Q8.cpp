#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;
bool Isprime(int num){
    if(num==1)return false;
    int i=2;
    for(;i*i<=num;i++){
        if(num%i==0)
            return false;
    }
    return true;
}

int main(){
   int in;
    while(cin>>in && in!=EOF){
        if(!Isprime(in))cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
