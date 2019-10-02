#include<iostream>

using namespace std;

int main(){
    int i,j = 0,n;
    cin>>n>>i;
    while (n>0){
        if (n%10==i){
            j=j+1;
        }
        n=n/10;
    }
    cout<<j;
    return 0;
}
