#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
    string ans;
    cin>>ans;
    int a[4];
    for(int i=0;i<4;i++){
        a[i]=int(ans[i]);
    }
    string in;
    cin>>in;
    while (in!="0000\0")
    {
        if(in==ans)cout<<"4A0B"<<endl;
        else{
            int A=0,B=0,I[4];
            for(int i=0;i<4;i++){
                I[i]=int(in[i]);
            }
            for(int i=0;i<4;i++){
                if(a[i]==I[i])A++;
            }
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(I[i]==a[j])B++;
                }
            }
            B=B-A;
            cout<<A<<"A"<<B<<"B"<<endl;
        }

        cin>>in;

    }
    
    return 0;
}
