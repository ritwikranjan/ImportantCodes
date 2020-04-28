#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        arr.emplace_back(temp);
    }
    set f,s;
    map<int,bool> fmap,smap;
    for (int i = 0; i < n; i++)
    {
        f.insert(arr[i]);
        //int a = *f.find_by_order(f.size()-1);
        if((f.size()==*f.find_by_order(f.size()-1))&&(f.size()==i+1)){
            fmap[i] = true;
        }else{
            fmap[i] = false;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        s.insert(arr[i]);
        //cout<<s.size()<<" "<<*s.find_by_order(s.size()-1)<<" "<<n-i<<" ";
        if((s.size()==*s.find_by_order(s.size()-1))&&(s.size()==n-i)){
            smap[i] = true;
        }else{
            smap[i] = false;
        }
    }
    vector<pair<int,int>> ans;
    for (int i = 0; i < n; i++)
    {
        if(fmap[i]&&smap[i+1]){
            ans.push_back(make_pair(i+1,n-1-i));
        }
    }

    cout<<ans.size()<<endl;

    for (int i = 0; i < ans.size(); i++)    
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    
    


}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}