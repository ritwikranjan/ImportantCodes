#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n];
    //int prei[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        /*if(i == 0){
            prei[i] = arr[i];
        } else{
            prei[i] = prei[i-1] + arr[i];
        }*/
    }
    /*int prej[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(i == 0){
            prei[i] = arr[i];
        } else{
            prei[i] = prei[i-1] + arr[i];
        }
    }*/
    int i = 0, j = n-1, sumi = 0, sumj = 0, sum = 0;
    while(i < j){
        if(sumi==sumj){
            sum = sumi;
            sumi+=arr[i];
            sumj+=arr[j];
            i++; j--;
        }
        if(sumi<sumj){
            sumi+=arr[i];
            i++;
        }
        if(sumj>sumi){
            sumj+=arr[j];
            j--;
        }
    }
    if(sumi==sumj)
        sum = sumi;
    cout<<sum;

}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}