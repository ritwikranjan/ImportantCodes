#include<iostream>

using namespace std;

int main(){
    int N,ans = 0;
    cin>>N;
    while (N!=0){
       if (N&1==1){
         ans = ans + 1;

       }
       N = N >> 1;

    }
    cout<<ans<<endl;
    return 0;
}
