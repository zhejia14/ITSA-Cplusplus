#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int longestRepeatingSubsequence(vector<int>& sequence) {
    int N = sequence.size();
    vector<int> dp(N, 1);

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (sequence[i] == sequence[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int maxLength = *max_element(dp.begin(), dp.end());
    return maxLength;
}

int main() {
    int num;
    cin>>num;
    vector<int> sequence;
    for(int i=0,in;i<num;i++){
        cin>>in;
        sequence.push_back(in);
    }
   
    int longestLength = longestRepeatingSubsequence(sequence);
    cout << longestLength << endl;

    return 0;
}
