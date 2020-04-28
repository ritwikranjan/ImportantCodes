#include <bits/stdc++.h>
using namespace std;

void primeSeive(bool p[], int n){
    for(int i = 3; i <= n; i+=2){
        p[i] = 1;
    }
    for(int i = 3; i <= n; i+=2){
        for(int j = i*i; j <= n; j+=i){
            p[j] = 0;
        }
    }
    p[0] = p[1] = 0;
    p[2] = 1;
    return;
}

void bitsetSeive(bitset<100> &b){
    b.set();
    b[0] = b [1] = 0;
    for(long long int i = 2; i < 100; i++){
        if(b[i])
        for(long long j = i*i; j < 100; j+=i){
            b[j] = 0;
        }
    }
}

int main(){
    //int n; cin>>n;
    //bool p[n+1] = {0};
    //primeSeive(p,n);
    bitset<100> b;
    bitsetSeive(b);
    /*vector<int> v;
    for(int i = 0; i <= n; i++){
        if(b[i]){
            cout<<i<<" ";
        }
    }*/
    return 0;
}