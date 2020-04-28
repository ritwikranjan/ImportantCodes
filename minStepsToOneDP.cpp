#include <bits/stdc++.h>
#define int long long int

using namespace std;

int minStepsToOne(int n, int dp[]){
    if(n==2||n==3){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int factor2 = INT_MAX, factor3 = INT_MAX;
    if(n%2==0){
        factor2 = minStepsToOne(n/2,dp);
    }
    if(n%3==0){
        factor3 = minStepsToOne(n/3,dp);
    }
    dp[n] = min(factor2,min(factor3,minStepsToOne(n-1,dp))) + 1;
    return dp[n];


}

void solve(){
    int n; cin>>n;
    int dp[100] = {0};
    cout<<minStepsToOne(n,dp);
    return;
}

int32_t main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}