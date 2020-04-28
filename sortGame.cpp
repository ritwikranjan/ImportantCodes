#include <bits/stdc++.h>
using namespace std;


bool myComp(pair<string,int> p1, pair<string,int> p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;
    } 
    return p1.second>p2.second;
}

int main(){
    int maxSal,n;
    cin>>maxSal>>n;
    vector<pair<string,int>> data;
    for (int i = 0; i < n; i++)
    {
        int mark;
        string name;
        cin>>name>>mark;
        if(mark>maxSal){
            data.push_back(make_pair(name,mark));
        }
    }
    sort(data.begin(),data.end(),myComp);
    for (int i = 0; i < data.size(); i++)
    {
        cout<<data[i].first<<" "<<data[i].second<<endl;
    }
    return 0;
    
}