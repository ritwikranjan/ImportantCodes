#include<iostream>
#include<vector>

using namespace std;

int searching(vector<int> v, int n)
{
    int s = 0, e = n-1, mid;
    while (s<=e){
        mid = (s + e)/2;
        if (v[mid]<v[mid-1])
            return mid-1;
        else if (v[mid]>v[mid + 1]&&v[mid]>v[mid-1])
            return mid;
        else if (v[mid]<v[mid + 1]&&v[mid]>v[mid-1]&&v[s]<=v[mid])
            s = mid + 1;
        else if (v[mid]<v[mid + 1]&&v[mid]>v[mid-1]&&v[e]>=v[mid])
            e = mid - 1;
    }
}

int main()
{
    vector <int> v;
    v.reserve(100);
    int n,key;
    cin>>n;
    for (int i = 0; i <n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int ans = searching(v, n);
    cout<<ans;
    return 0;
}
