#include<bits/stdc++.h>
using namespace std;

int maxNoCoin(int* arr, int n, int i){
    int count = 0;
    while(n>0){
        if(arr[i]<=n){
            n-=arr[i];
            count++;
        } else{
            i--;
        }
    }
    return count;
}


int main(){
    int coinArr[] = {1,2,5,10,20,50,100,200,500,2000};
    int n;
    cin>>n;

    cout<<maxNoCoin(coinArr,n,9);

    return 0;
}
