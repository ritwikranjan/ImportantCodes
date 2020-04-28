#include <bits/stdc++.h>

using namespace std;
#define int long long int


void solve(){
    int n;cin>>n;
    int r = 3;
    while(r<=n){
        if((n%r)==0){
            cout<<n/r<<endl;
            return;
        }
        r = r<<1;
        r = r|1;
    }

}

int32_t main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}