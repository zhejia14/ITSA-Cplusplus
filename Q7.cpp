#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main(){
   int n,sum1,sum2;
    int a1,a2,b1,b2;
    char c;
    cin>>n;
    while(n>0){
        cin>>c>>a1>>a2>>b1>>b2;
        if(c=='+'){
            sum1=a1+b1;
            sum2=a2+b2;
            cout<<sum1<<" "<<sum2<<endl;
        }
        else if(c=='-'){
            sum1=a1-b1;
            sum2=a2-b2;
            cout<<sum1<<" "<<sum2<<endl;
        }
        else if(c=='*'){
            sum1=a1*b1-a2*b2;
            sum2=a2*b1+a1*b2;
            cout<<sum1<<" "<<sum2<<endl;
        }
        n=n-1;
    }
    return 0;
}
