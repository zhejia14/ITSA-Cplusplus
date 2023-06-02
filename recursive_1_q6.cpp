#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int func(int n) {
    if(n==0 || n==1) return n+1;
    return func(n-1)+func(n/2);
}

int main() {
    int in;
    cin>>in;
    cout<<func(in)<<endl;
    return 0;
}
