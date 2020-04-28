#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve(){
    int n; cin>>n;
    if(n%4!=0){
        cout<<"NO"<<endl;
        return;
    }
    unordered_set<int> odd;
    int evenNo = 2;
    int oddNo = 1;
    vector<int> arr(n,0);
    for(int i = 0; i < n/2; i++){
        arr[i] = evenNo;
        evenNo+=2;
    }

    for (int i = 0; i < n/2; i+=2){
        int indexA = (n/2) + i;
        int indexB = indexA+1;
        int evenSum = arr[i] + arr[i+1];
        while(arr[indexB]==0){
            if(odd.find(oddNo)==odd.end()){
                arr[indexA] = oddNo;
                odd.insert(oddNo);
                int temp = evenSum - arr[indexA];
                if(odd.find(temp)==odd.end()){
                    arr[indexB] = temp;
                    odd.insert(temp);
                }
            }
            oddNo+=2;
            
        }
        
    }
    cout<<"YES"<<endl;
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    





}

int32_t main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}