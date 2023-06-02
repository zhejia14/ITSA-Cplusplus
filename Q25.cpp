#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        string str;
        getline(cin,str,'\n');
        int sum=0;
        for(int i=0;i<str.length();i++){
            if((int)str[i]>=32 && (int)str[i]<127)sum+=(int)str[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
