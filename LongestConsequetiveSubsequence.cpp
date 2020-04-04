#include<bits/stdc++.h>
using namespace std;

//Reduced and Optimized O(n)
int reduced(int *a, int n){
    unordered_map<int,int> rmp;
    for (int i = 0; i < n; i++)
    {
        rmp[a[i]]++;
    }
    int count = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        if(rmp[x-1]==0){
            while(rmp[x]!=0){
                count++;
                x++;
            }
            ans = max(count,ans);
        }
        count = 0;
    }
    return ans;
    
}


//Optimized to O(n)
int optimize(int *a, int n){
    unordered_map<int,int> omp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int lenR = omp[a[i]-1],lenF = omp[a[i]+1];
        if((lenR!=0)&&(lenF!=0)){
            omp[a[i]] = lenF + lenR + 1;
            omp[a[i]-lenR] = omp[a[i]];
            omp[a[i]+lenF] = omp[a[i]];
            ans = max(ans,omp[a[i]]);
        } else
        if(lenR!=0){
            omp[a[i]] = lenR + 1;
            omp[a[i]-lenR] = omp[a[i]];
            ans = max(ans,omp[a[i]]);
        } else 
        if(lenF!=0){
            omp[a[i]] = lenF + 1;
            omp[a[i]+lenF] = omp[a[i]];
            ans = max(ans,omp[a[i]]);
        } else
        {
            omp[a[i]] = 1;
            ans = max(ans,omp[a[i]]);
        }
    }
    return ans;
    

}

//Unoptimized O(max-min)
int unoptimized(int *a, int n){
    unordered_map<int,int> mp;
    int maxV = INT_MIN, minV = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if(a[i]<minV){
            minV = a[i];
        }
        if(a[i]>maxV){
            maxV = a[i];
        }
    }
    int count = 0, ans = 0;
    for (int i = minV; i <= maxV; i++)
    {
        if(mp[i]!=0){
            count++;
        } else{
            count = 0;
        }
        if(count>ans){
            ans = count;
        }
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<unoptimized(a,n)<<endl<<optimize(a,n)<<endl<<reduced(a,n);
}