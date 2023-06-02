#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

class student{
public:
    int id;
    int math;
    int english;
};


bool cmpEnglish(student a,student b){
    return a.english>b.english;
}
bool cmpMath(student a,student b){
    return a.math>b.math;
}

int main(){
    int num;
    cin>>num;
    student *array=new student[num];
    for(int i=0;i<num;i++){
        cin>>array[i].id>>array[i].math>>array[i].english;
    }
    sort(array,array+num,cmpEnglish);
    sort(array,array+num,cmpMath);
    for(int i=0;i<num;i++){
        cout<<array[i].id<<" "<<array[i].math<<" "<<array[i].english<<endl;
    }
    return 0;
}
