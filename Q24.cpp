#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    long int n,p;
    long double r,sum=0;
    cin>>r>>n>>p;
    for(int i=0;i<n;i++){
        sum=sum+p;
        sum=sum*(1.0+r);
    }
    cout<<(long long int)sum;
    return 0;
}
