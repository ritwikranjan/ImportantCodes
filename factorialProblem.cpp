#include <bits/stdc++.h>
#define int long long int
using namespace std;

bitset<10000005> b;
vector<int> prime;

void bitsetSeive(){
    b.set();
    b[0] = b [1] = 0;
    for(int i = 2; i < 10000000; i++){
        if(b[i]){
            for(int j = i*i; j < 100; j+=i){
                b[j] = 0;
            }
            prime.push_back(i);
        }
    }
}

int occurence(pair<int,int> factor, int n){
    if(factor.second==0){
        return INT_MAX;
    }
    int cnt = 0;
    while(n>0){
        n/=factor.first;
        cnt+=n;
    }
    return cnt/factor.second;
}

void solve(){
    int n,k; cin>>n>>k;
    vector<pair<int,int>> factor;
    int occ = 0,ans = INT_MAX;
    for(int i = 0; prime[i]*prime[i] <= k; i++){
        int cnt = 0;
        while(k%prime[i]==0){
            k/=prime[i];
            cnt++;
        }
        factor.push_back(make_pair(prime[i],cnt));
    }
    if(k>1){
        factor.push_back(make_pair(k,1));
    }

    for(auto fac : factor){
        occ = occurence(fac,n);
        ans = min(ans,occ);
    }

    cout<<ans<<endl;
    factor.clear();
}
int32_t main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    bitsetSeive();
    int t; cin>>t; while(t--)
    solve();
    return 0;
}