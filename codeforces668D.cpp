#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>

using namespace std;

class Query{
    public: 
    int a,b,c;
    Query(){};
    Query(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};



bool myComp(Query q1, Query q2){
    return q1.b<q2.b;
}

void solve(){
    int n; cin>>n;
    vector<Query> q;
    for(int i = 0; i < n; i++){

        int a,b,c;
        cin>>a>>b>>c;
        q.push_back(Query(a,b,c));
    }
    //sort(q.begin(),q.end(),myComp);
    ordered_set ans;
    int i = 0;
    for(auto var : q)
    {
        if(var.a==1){
            ans.insert(make_pair(var.c,i++));
        }else if(var.a == 2){
            ans.erase(ans.find(make_pair(var.c,-1)));
        }else{
            cout<<ans.order_of_key(make_pair(var.c,n))<<" "<<ans.order_of_key(make_pair(var.c,-1))<<endl;
        }
    }   
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}