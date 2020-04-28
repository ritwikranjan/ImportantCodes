#include <bits/stdc++.h>
#define int long long int

using namespace std;

int counter = 0;

/* int minCoins(int amt, int* coins, int n, int* dp){
    int ans = INT_MAX;
    if(amt==0){
        return 0;
    }
    if(dp[amt]!=0){
        return dp[amt];
    }
    for(int i = 0; i < n; i++){
        if(amt-coins[i]>=0){
            int subAns = minCoins(amt-coins[i],coins,n,dp);
            ans = min(ans,subAns+1);
            cout<<counter++<<" ";
        }
    }
    cout<<endl;
    dp[amt] = ans;
    return dp[amt];

} */

int minCoins(int amt, int* coins, int n, int* dp){
    for(int i = 1; i <= amt; i++){
        int ans = INT_MAX;
        for(int j = 0; j < n; j++){
            if(i>=coins[j]){
                int tempAns = dp[i-coins[j]] + 1;
                ans = min(ans,tempAns);
            }
        }
        dp[i] = ans;
    }
    return dp[amt];

}

void solve(){
    int n; cin>>n;
    int coins[n], dp[10000] = {0};
    for(int i = 0; i < n; i++){
        cin>>coins[i];
    }
    int amt; cin>>amt;
    cout<<minCoins(amt, coins, n, dp);



}

int32_t main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}