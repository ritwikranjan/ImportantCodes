#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n,q; cin>>n>>q;

    int start = 0, ans = 0;

    for(int i = 0; i < q; i++){
        int f,d; cin>>f>>d;
        ans +=  abs(f - start) + abs(d - f);
        start = d;
    }

    cout<<ans<<endl;




    
}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}