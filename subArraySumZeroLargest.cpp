#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
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
        if(pre==0)
            ans = max(i+1,ans);
        if(s.find(pre)!=s.end())
            ans = max(i-s.find(pre)->second,ans);
        else
            s.insert(pair<int,int>(pre,i));
    }
    cout<<"Largest Subarray with Zero Sum = "<<ans<<endl;
    return 0;
}