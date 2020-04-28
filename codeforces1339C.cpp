#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[100005];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        int j = 0;
        int val = arr[i+1];
        while(arr[i]>val){
            val+=pow(2,j++);
        }
        arr[i+1] = val;
        count = max(j,count);
    }
    cout<<count<<endl;

    

}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}