#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main(){
    int n,tar;cin>>n>>tar;
    vector<int> coin(101),dp(1000005,INT_MAX);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        cin >> coin[i];
        for(int j=0;j+coin[i]<=tar;j++){//對tar較小的部分作偵測
            dp[j+coin[i]] = min(dp[j+coin[i]],dp[j]+1);//比較
        }
    }
    if(dp[tar] > tar)cout << -1;
    else cout << dp[tar];
}
//O(n*tar)
