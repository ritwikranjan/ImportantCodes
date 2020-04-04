#include<bits/stdc++.h>

using namespace std;

class Activity{
    public:
    int et;
    int bt;
    Activity(){}
    Activity(int et, int bt){
        this->et = et;
        this->bt = bt;
    }
};

bool customComp(Activity a1, Activity a2){return a1.et<a2.et; }

int maxActivities(Activity activities[], int n){
    
    return 0;
}

int main(){
    int n;
    cin>>n;
    Activity act[10];
    for(int i = 0; i < n; i++){
        int bt,et;
        cin>>bt>>et;
        act[i].et = et;
        act[i].bt = bt;
    }
    int count = 1;
    sort(act, act + n, customComp);
    int cur = 0;
    for(int i = 1; i < n; i++){
        if(act[i].bt>=act[cur].et){
            count++;
            cur = i;
        }
    }
    cout<<count;
    return 0;
}