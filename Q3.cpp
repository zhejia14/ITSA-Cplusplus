#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;
double dis(double x, double y){
    x=x*x;
    y=y*y;
    double dis=x+y;
    dis=sqrt(dis);
    return dis;
}
int main(){
    double range=100;
    double x,y;
    while(cin>>x>>y && x!=EOF){
        if(dis(x,y)>range)cout<<"outside\n";
        else cout<<"inside\n";
    }

    return 0;
}
