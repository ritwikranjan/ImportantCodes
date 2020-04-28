#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    if(n<=2){
        cout<<0;
        return;
    }
    int minl[2] = {INT_MAX,INT_MAX}, maxl[2] = {INT_MIN,INT_MIN};
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i]<minl[0]){
            minl[1] = minl[0];
            minl[0] = arr[i];
        } else if(arr[i]<minl[1]){
            minl[1] = arr[i];
        }
        if(arr[i]>maxl[0]){
            maxl[1] = maxl[0];
            maxl[0] = arr[i];
        } else if(arr[i]>maxl[1]){
            maxl[1] = arr[i];
        }
    }
    cout<<min(maxl[0]-minl[1],maxl[1]-minl[0]);

}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}