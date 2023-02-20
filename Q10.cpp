#include <iostream>
using namespace std;
int GCD(int,int);
int main(int argc, const char * argv[]) {
    int num_1,num_2,ans;
    cin>>num_1>>num_2;
    ans=GCD(num_1, num_2);
    cout<<ans<<endl;
    return 0;
}
int GCD(int num1,int num2){
    if(num2>num1){
        int temp=0;
        temp=num1;
        num1=num2;
        num2=temp;
    }
    if(num2==0)return num1;
    return GCD(num2, num1%num2);
}
