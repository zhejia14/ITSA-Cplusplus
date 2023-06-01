#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class CharNum{
public:
    char c;
    int n;
};
//compare char function form ascii number small to big
bool compare(CharNum a,CharNum b){
    return (int)a.c < (int)b.c;
}

int main(){
   int num;
   cin>>num;
   
   vector<CharNum> array;
   CharNum in;
   for(int i=0;i<num;i++){
        cin>>in.c;
        in.n = 0;
        array.push_back(in);
   }
   sort(array.begin(),array.end(), compare);
   map<char,int> count;
    for(int i=0;i<num;i++){
            count[array[i].c] += 1;
    }
    //print count
    for(auto i=count.begin();i!=count.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}
