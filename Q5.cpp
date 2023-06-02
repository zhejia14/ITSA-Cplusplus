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
        if(in==0)cout<<"00000000\n";
        if(in>0){
            int array[8];
            for(int i=0;i<8;i++){
                array[i]=in%2;
                in=in/2;
            }
            for(int i=7;i>=0;i--)cout<<array[i];
            cout<<endl;
        }
        if(in<0){
            int array[8];
            in=-(in);
            for(int i=0;i<8;i++){
                if(in%2==0)array[i]=1;
                else array[i]=0;
                in=in/2;
            }
            array[0]=array[0]+1;
            int tmp=0;
            while(array[tmp]==2){
                array[tmp]=0;
                array[tmp+1]=array[tmp]+1;
                tmp++;
            }
            for(int i=7;i>=0;i--)cout<<array[i];
            cout<<endl;
        }
    }
    return 0;
}
