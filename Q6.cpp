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
        if(in>=3&&in<=5)cout<<"Spring\n";
        else if (in>=6&&in<=8)cout<<"Summer\n";
        else if (in>=9&&in<=11)cout<<"Autumn\n";
        else if (in==2||in==1||in==12)cout<<"Winter\n";
    }
    return 0;
}
