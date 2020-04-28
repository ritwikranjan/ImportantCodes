#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n; cin>>n; int a = 0, b = 0, c =0 ;
    int stage = n%27; int x = n/27;
    if(stage<=2){
        a = pow(2,x);
    }else if(stage<=10){
        b = pow(2,x);
    }else{
        c = pow(2,x);
    }
    cout<<a<<" "<<b<<" "<<c;

}
int32_t main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}