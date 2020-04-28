#include <bits/stdc++.h>

using namespace std;

bool myComp(string s1, string s2){
    return s1+s2<s2+s1;
}

int main(){
    int n; cin>>n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin>>temp;
        s.push_back(temp);
    }
    sort(s.begin(),s.end(),myComp);
    for(auto var : s)
    {
       cout<<var;
    }
    return 0;
    
}