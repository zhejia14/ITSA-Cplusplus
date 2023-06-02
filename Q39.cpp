#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

struct grade{
    int listen;
    int read;
    int speak;
    
};

int main(){
    int num;
    cin>>num;
    struct grade *array=new grade[num];
    for(int i=0;i<num;i++){
        cin>>array[i].listen>>array[i].read>>array[i].speak;
        if(array[i].listen>=60 && array[i].read>=60 && array[i].speak>=60)cout<<"P\n";
        else if (array[i].listen+array[i].read+array[i].speak>=220&&(array[i].listen<60||array[i].read<60||array[i].speak<60))cout<<"P\n";
        else if(array[i].listen+array[i].read+array[i].speak<220){
            if(array[i].listen>=60&&array[i].read>=60&&array[i].speak<60)cout<<"M\n";
            else if(array[i].listen>=60&&array[i].read<60&&array[i].speak>=60)cout<<"M\n";
            else if (array[i].listen<60&&array[i].read>=60&&array[i].speak>=60)cout<<"M\n";
            else if (array[i].listen<60&&array[i].read<60&&array[i].speak>=80)cout<<"M\n";
            else if (array[i].listen<60&&array[i].read>=80&&array[i].speak<60)cout<<"M\n";
            else if (array[i].listen>=80&&array[i].read<60&&array[i].speak<60)cout<<"M\n";
            else cout<<"F\n";
        }
    }
    return 0;
}
