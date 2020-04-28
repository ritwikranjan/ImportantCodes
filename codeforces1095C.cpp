#include <bits/stdc++.h>

using namespace std;


void solve(){
    int x; cin>>x;
    priority_queue<int> ans;
    int y = x;
    int i = 0;
    while(y>0){
        int bit = y%2;
        if(bit){
            ans.push(pow(2,i));
        }
        i++;
        y/=2;
    }
    int k; cin>>k;
    if(ans.size()>k){
        cout<<"NO";
        return;
    }else if(ans.size()==k){
        cout<<"YES"<<endl;
        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
        return;      
    }else if (ans.size()<k){
        while (ans.size()!=k)  
        {
            int top = ans.top();
            if(top==1){
                cout<<"NO"<<endl;
                return;
            } else{
                top/=2;
                ans.pop();
                ans.push(top);
                ans.push(top);
            }
            
        }
        cout<<"YES"<<endl;
        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
        return;

    }


}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}