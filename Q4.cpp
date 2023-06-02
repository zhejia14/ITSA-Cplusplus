#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main(){
    int st,sm,et,em,sum;
    cin >> st >> sm >> et >> em;
    int totaltime=(et*60+em)-(st*60+sm);

     if(totaltime<=120 && totaltime>=0){
        sum=totaltime/30;
        sum=sum*30;
    }
    else if (totaltime>120 && totaltime<=240){
        sum=(totaltime-120)/30*40+120;
    }
    else{
        sum=(totaltime-240)/30*60+280;
    }
    cout<<sum<<endl;
    return 0;
}
