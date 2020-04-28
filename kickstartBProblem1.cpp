#include <bits/stdc++.h>

using namespace std;

int caseId = 1;

void solve(){
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int temp; cin>>temp;
        arr.emplace_back(temp);
    }
    int count = 0;
    for(int i = 1; i < n-1; i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            count++;
        }
    }
    cout<<"Case #"<<caseId++<<": "<<count<<endl;
    arr.clear();

}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}