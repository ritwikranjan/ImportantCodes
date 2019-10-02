#include<iostream>
using namespace std;
int main ()
{
    int n,a[100];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i <= n/2; i++){
            if(a[i]!=a[n-1-i]){
                cout<<"false";
                break;
            }
            else if(i==n/2){
                cout<<"true";
                break;
            }
    }
    return 0;
}
