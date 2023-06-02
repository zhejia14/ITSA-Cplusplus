#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    int num,a,o,p,f=0,t=0;
    char g;
    cin>>num>>g>>a>>g>>o>>g>>p;
    int price=a*15+o*20+p*30;

    if(price>num){
        cout<<0<<endl;
        return 0;
    }
    else{
        num=num-price;
        if(num>=50){
            f=num/50;
            num=num%50;
        }
        if(num>=5){
            t=num/5;
            num=num%5;
        }
        cout<<num<<","<<t<<","<<f<<endl;
    }
    return 0;
}
