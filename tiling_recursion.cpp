#include <iostream>

using namespace std;

int tiling(int n,int m)
{
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else if(n>=m){
        return tiling(n-1,m)+tiling(n-m,m);
    }
    else{
        return tiling(n-1,m);
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int a,b;
        cin>>a>>b;
        cout<<tiling(a,b)<<endl;
    }
    return 0;
}
