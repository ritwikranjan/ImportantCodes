#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    for (i=1;i<=n;i++){
         for (j=65;j<=n-i+65;j++){
                 cout<<" "<<char(j);
        }
         for (k=n+65-i;k>=65;k--){
                cout<<" "<<char(k);
            }



        cout<<endl;
    }
}
