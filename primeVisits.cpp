#include <bits/stdc++.h>
#define int long long int
using namespace std;

bitset<10000005> b;
vector<int> prime;

void bitsetSeive(){
    b.set();
    b[0] = b [1] = 0;
    for(long long int i = 2; i < 10000000; i++){
        if(b[i]){
            for(long long j = i*i; j < 100; j+=i){
                b[j] = 0;
            }
            prime.push_back(i);
        }
    }
}

void solve(){
    int a,b; cin>>a>>b;
}
int32_t main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}