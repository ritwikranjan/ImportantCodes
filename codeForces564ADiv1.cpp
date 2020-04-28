#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100],b[100];
    bool checkB = false, checkOne = false;
    int startIndex, startValue = 1,ans;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]!=0){
            count++;
        }
    }
    for(int i = 0; i < n; i++){
        cin>>b[i];
        if(b[i] == 1){
            ans = i;
            startIndex = i;
            checkB = true;
            checkOne = true;
        }
        if(checkB){
            if(b[startIndex]!=startValue){
                checkB = false;
            }
            startValue++;
            startIndex++;
        }
    }
    if(checkB){
        cout<<ans<<endl;
    } 
    else if(!checkOne){
        cout<<n<<endl;
    }
    else{
        cout<<n + ans + 1;
    }


}