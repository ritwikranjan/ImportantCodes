#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag = true;
        int n, d, f, tD, iF;
        cin>>n;
        vector<pair<int,int>> fStops;
        for(int i = 0; i < n; i++){
            cin>>d>>f;
            fStops.push_back(make_pair(d,f));
        }
        cin>>tD>>iF;
        for (int i = 0; i < n; i++)
        {
            fStops[i].first = tD - fStops[i].first;
        }
        sort(fStops.begin(),fStops.end(),myCompare);
        priority_queue<int> F;

        int x = 0, prev = 0;
        int count = 0;
        while(x<n){
            if(iF >= fStops[x].first - prev){
                F.push(fStops[x].second);
                iF = iF - (fStops[x].first - prev);
                prev = fStops[x].first;
            } else{
                if(F.empty()){
                    flag = false;
                    break;
                } else{
                    count++;
                    iF = iF + F.top();
                    F.pop();
                    continue;
                }
            }
            x++;
        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        while(iF<tD - prev){
            if(F.empty()){
                flag = false;
                break;
            }
            iF = iF + F.top();
            F.pop();
            count++;
        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        cout<<count<<endl;

    }
}