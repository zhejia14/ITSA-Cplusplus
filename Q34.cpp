#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;
int main(){
    float height, sex;
    while (cin>>height>>sex && height!=EOF) {
        if(sex==1){
            float standard;
            standard=(height-80)*0.7;
            
            cout<<fixed;
            cout.precision(1);
            cout<<standard<<endl;
        }
        else{
            float standard;
            standard=(height-70)*0.6;
            
            cout<<fixed;
            cout.precision(1);
            cout<<standard<<endl;
        }
    }
    return 0;
}
