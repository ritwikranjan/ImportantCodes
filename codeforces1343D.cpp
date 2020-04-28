#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<int> arr(n);
    int count = 0;
    multiset<int> sum;
    for(int i = 0;i < n; i++){
        int temp;cin>>temp;
        arr[i] = temp;
    }
    for(int i = 0;i < n/2; i++){
        sum.insert(arr[i]+arr[n-i-1]);
    }
    for(auto i : sum){
        count = max(count,sum())
    }




}

int32_t main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}