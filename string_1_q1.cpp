#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

void convert(int input, int num) {
    string result;
    stringstream s;
    while (input > 0) {
        int temp = input % num;
        if (temp < 10)
            s << temp;
        else
            s << char('A' + (temp - 10));

        input /= num;
    }

    result = s.str();
    reverse(result.begin(), result.end());
    cout<<result<<endl;
}

int main() {
    int num, input;
    
   while(cin>>num>>input){
    convert(input, num);
   }
    return 0;
}
