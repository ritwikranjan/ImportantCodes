#include <bits/stdc++.h>
using namespace std;
int main() {
    //priority_queue <int> p;
    priority_queue<int,vector<int>,greater<int>> p;
    int a[5]={4,6,8,5,7};
    for(int i = 0; i < 5; i ++){
        p.push(a[i]);
    }
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}
