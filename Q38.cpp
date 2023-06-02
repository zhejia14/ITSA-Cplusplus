#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int input;
    cin>>input;
    if(input<=120){
        cout<<fixed;
        cout.precision(2);
        cout<<"Summer months:"<<input*2.1<<"\n";
        cout<<"Non-Summer months:"<<input*2.1<<"\n";
        return 0;
    }
    else{
        cout<<fixed;
        cout.precision(2);
        float sum1, sum2;
        sum1=sum2=120*2.1;
        input=input-120;
        if(input>=1 && input<=210){
            sum1+=input*3.02;
            cout<<"Summer months:"<<sum1<<"\n";
            sum2+=input*2.68;
            cout<<"Non-Summer months:"<<sum2<<"\n";
            return 0;
        }
        else{
            sum1+=210*3.02;
            sum2+=210*2.68;
            input=input-210;
            if(input>=1&&input<=170){
                sum1+=input*4.39;
                cout<<"Summer months:"<<sum1<<"\n";
                sum2+=input*3.61;
                cout<<"Non-Summer months:"<<sum2<<"\n";
                return 0;
            }
            else{
                sum1+=170*4.39;
                sum2+=170*3.61;
                input=input-170;
                if(input>=1&&input<=200){
                    sum1+=input*4.97;
                    cout<<"Summer months:"<<sum1<<"\n";
                    sum2+=input*4.01;
                    cout<<"Non-Summer months:"<<sum2<<"\n";
                    return 0;
                }
                else{
                    sum1+=200*4.97;
                    sum2+=200*4.01;
                    input=input-200;
                    sum1+=input*5.63;
                    cout<<"Summer months:"<<sum1<<"\n";
                    sum2+=input*4.5;
                    cout<<"Non-Summer months:"<<sum2<<"\n";
                }
            }
        }
    }
    return 0;
}
