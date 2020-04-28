#include <bits/stdc++.h>

using namespace std;

int caseId = 1;


void solve(){
    int n,d; cin>>n>>d;
    int arr[1001];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = n-1; i >= 0; i--){
        while(d%arr[i]!=0){
            d-=d%arr[i];
        }
    }
    
    cout<<"Case #"<<caseId++<<": "<<d<<endl;
}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}