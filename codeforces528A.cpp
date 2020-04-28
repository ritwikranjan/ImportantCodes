#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef pair<int,int> pi;
typedef pair<int,pi> pii;

void solve(){
    int l,b,n; cin>>l>>b>>n;
    //priority_queue<int> xAxis,yAxis;
    set<pii> xAxis,yAxis;
    xAxis.insert(make_pair(b,make_pair(0,b)));
    xAxis.insert(make_pair(l,make_pair(0,l)));
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        char type; int val;
        cin>>type>>val;
        if(type == 'H'){
            if(val)
        }
    }
    

}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}