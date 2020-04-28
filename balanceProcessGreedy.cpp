#include<bits/stdc++.h>
using namespace std;

int movesToBalance(int arr[], int n){
    int sum = 0;
    for(int i = 0;i < n; i++){
        sum+=arr[i];
    }
    if(sum%n!=0){
        return -1;
    }
    int avg = sum/n;
    int ans = 0;
    int minMoves = INT_MIN;
    for(int i = 0; i < n; i++){
        ans += (arr[i] - avg);
        minMoves = max(minMoves,abs(ans));
    }
    return minMoves;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<movesToBalance(arr,n);
    
}