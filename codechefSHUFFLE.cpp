#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    if(k==1){
        cout<<"yes"<<endl;
        return; 
    }
    int arr[n];
    int pass = 0;
    for(int i = 0; i < n; i++){
        int temp; cin>>temp;
        arr[i] = temp;
    }
    while (1){
        for(int i = 0; i < n-k-(pass*k); i++){
            if(arr[i]>arr[i+k]){
                swap(arr[i],arr[i+k]);
            }
        }
        if(!is_sorted(arr+n-k+1-pass*k,arr+n)){
            cout<<"No"<<endl;
            return;
        }
        if(n-k-(pass*k)<=0){
            cout<<"yes"<<endl;
            return;
        }
        pass++;
    }


}

int32_t main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}