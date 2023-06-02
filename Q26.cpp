#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
class mark{
    public:
        int num;
        int sum;
    mark(){
        num=0;
        sum=0;
    }
};
bool cmpnum(mark a,mark b){
    return a.num<b.num;
}

bool cmpsum(mark a,mark b){
    return a.sum<b.sum;
}

int main() {
    int n;
    cin>>n;
    vector<mark> arr;
    for(int i=0;i<n;i++){   
        cin>>arr[i].num;
        int tmp=arr[i].num;
        while(tmp!=0){
            arr[i].sum+=tmp%10;
            tmp/=10;
        }
    }
    sort(arr.begin(),arr.end(),cmpnum);
    sort(arr.begin(),arr.end(),cmpsum);

    for(int i=0;i<n;i++){
        cout<<arr[i].num<<" ";
    }
    cout<<endl;
    return 0;
}
