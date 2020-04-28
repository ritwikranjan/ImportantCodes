#include <bits/stdc++.h>

using namespace std;

int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,multiset<int>> ans;
        for(auto a: nums){
            sum+=a;
            ans[a%3].insert(a);
        }
        if(sum%3==0){
            return sum;
        }else if(sum%3==1){
            int alpha = 0,beta = 0;
            if(!ans[1].empty())
            alpha = *ans[1].begin();
            if(!ans[2].empty()){
            beta = *ans[2].begin();
            ans[2].erase(ans[2].begin());
            }
            if(!ans[2].empty()){
            beta+=*ans[2].begin();
            }else{
                return sum-alpha;
            }
            return alpha>beta?sum-beta:sum-alpha;
        }else if(sum%3==2){
            int alpha = 0,beta = 0;
            if(!ans[2].empty())
            alpha = *ans[2].begin();
            if(!ans[1].empty()){
            beta = *ans[1].begin();
            ans[1].erase(ans[1].begin());
            }
            if(ans[1].size()!=0){
            beta+=*ans[1].begin();
            } else{
                return sum-alpha;
            }
            return alpha>beta?sum-beta:sum-alpha;
        }
        return sum;
        
    }

void solve(){
    int n;
    cin>>n;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int t; cin>>t;
        ans.push_back(t);
    }
    cout<<maxSumDivThree(ans);

}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}