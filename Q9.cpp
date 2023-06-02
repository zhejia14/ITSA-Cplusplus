#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int in;
    while (cin>>in && in!=EOF) {
        int sum=0;
        for(int i=1;i<=in;i++){
            if(i%3==0)sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
