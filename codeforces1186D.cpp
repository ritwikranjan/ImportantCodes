#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    double arr[n];
    long long int it = 0;
    for(int i = 0; i<n; i++ ){
        cin>>arr[i];
        it+=floor(arr[i]);
    }
    int ans[n];
    int index = abs(it);
    for(int i = 0; i < index; i++){
        if(ceil(arr[i])==floor(arr[i]))
        index++;
        ans[i] = ceil(arr[i]);
        if(ans[i]==-0)
        cout<<0<<endl;
        else
        cout<<ans[i]<<endl;
    }
    for(int i = index; i < n; i++){
        ans[i] = floor(arr[i]);
        cout<<ans[i]<<endl;
    }

}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}