#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;
#include <sstream>

string convert(int input, int num) {
    string result;
    stringstream ss;

    while (input > 0) {
        int remainder = input % num;
        if (remainder < 10)
            ss << remainder;
        else
            ss << static_cast<char>('A' + (remainder - 10));

        input /= num;
    }

    result = ss.str();
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int num, input;
    
   while(cin>>num>>input && num!=EOF){
    string result = convert(input, num);
    cout<< result << endl;
   }
    return 0;
}
