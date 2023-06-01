#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//A comapre function for sort function let the number in vector from small to big
bool compare(int a,int b){
    return a<b;
}

int main(){
    int num;
    cin>>num;
    vector<int> list;
    for(int i=0,score;i<num;i++){ 
        cin>>score;
        list.push_back(score);
    }
    sort(list.begin(),list.end(),compare);

    for(int i=0;i<num;i++){
        cout<<list[i]<<endl;
    }
    return 0;
}
