#include<bits/stdc++.h>
using namespace std;

int maxBadness(int* arr, int n){
    int badness = 0;
    int sortedarr[100] = {0};
    for (int i = 1; i <= n; i++)
    {
        sortedarr[arr[i]]++;
    }
    for (int i = 1, j = 1; i <= n; j++)
    {
        while(sortedarr[j]--){
            badness+=abs(i-j);
            i++;
        }
    }
    return badness;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    cout<<maxBadness(arr,n);
    return 0;
}