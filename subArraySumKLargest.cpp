#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int *a = new int[n];
    unordered_map <int,int> s;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int pre = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        pre += a[i];
        if(pre==k)
            ans = max(i+1,ans);
        if(s.find(pre-k)!=s.end())
            ans = max(i-s.find(pre-k)->second,ans);
        s.insert(pair<int,int>(pre,i));
    }
    cout<<"Largest Subarray with "<<k<<" Sum = "<<ans<<endl;
    return 0;
}