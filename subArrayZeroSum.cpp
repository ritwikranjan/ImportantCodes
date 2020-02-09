#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    unordered_set <int> s;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        pre += a[i];
        if(pre == 0||s.find(pre)!=s.end()){
            cout<<"Yes!!";
            return 0;
        }
        s.insert(pre);
    }
    cout<<"No!!";
    return 0;
}