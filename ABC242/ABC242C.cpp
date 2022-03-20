#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n;
    cin >> n ;
    vector<vector<int64_t>> dp(1000020,vector<int64_t>(6));
    dp[1][1] =2;
    dp[1][2] =2;
    dp[1][3] =2;
    dp[1][4] =2;
    dp[1][5] =1;
    for(int i=2;i<=n;i++){
        dp[i][1] = (dp[i-1][1] + dp[i-1][2]) %998244353 ;
        dp[i][2] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][3])%998244353;
        dp[i][3] = (dp[i-1][2] + dp[i-1][3] + dp[i-1][4])%998244353;
        dp[i][4] = (dp[i-1][3] + dp[i-1][4] + 2*dp[i-1][5])%998244353;
        dp[i][5] = (dp[i-1][4] + dp[i-1][5])%998244353;
    }
    cout <<(dp[n][1]+dp[n][2]+dp[n][3]+dp[n][4]+dp[n][5])%998244353 << endl;
}