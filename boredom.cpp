#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> points(100001, 0);
 
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        points[number] = points[number] + number;
    }
 
    vector<long long> dp(100001, 0);
 
    dp[1] = points[1];
 
    for (int number = 2; number <= 100000; number++) {
        long long skip = dp[number - 1];
        long long take = dp[number - 2] + points[number];
 
        dp[number] = max(skip, take);
    }
 
    cout << dp[100000];
 
    return 0;
}
