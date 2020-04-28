#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> x = {0},y= {0};
    int diffX = 0,diffY = 0;
    for (int i = 0; i < k; i++)
    {
        int tempX,tempY;
        cin>>tempX>>tempY;
        x.push_back(tempX);
        y.push_back(tempY);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    for (int i = 1; i <= k; i++)
    {
        int tempDiffX = x[i] - x[i-1] - 1;
        int tempDiffY = y[i] - y[i-1] - 1;

        diffX = max(tempDiffX,diffX);
        diffY = max(tempDiffY,diffY);

    }
    cout<<diffX*diffY;
    


    
    return 0;
}