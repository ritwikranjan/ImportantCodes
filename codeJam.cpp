#include<bits/stdc++.h>

using namespace std;

int main(){
    int ans = 1;
    int t;
    cin>>t;
    while(t--){
        string temp;
        cin>>temp;
        //int number = stoi(temp);
        int len = temp.size();
        int z = 0;
        for (int i = 0; i < len; i++){
            z += (temp[i] - '0') * pow(10,len-i-1);
        }
        for(int i = 0; i < len; i++){
            if(temp[i] == '4'){
                temp[i] = '3';
            }
        }
        int x = 0;
        for (int i = 0; i < len; i++){
            x += (temp[i] - '0') * pow(10,len-i-1);
        }
        int y = z-x;
        
        cout<<"Case #"<<ans++<<": "<<y<<"  "<<x<<endl;

        //int ans1 = stoi(ch);
        //int ans2 = number - ans1;
        //cout<<ans1<<'\t'<<ans2<<endl;
        
    }
}