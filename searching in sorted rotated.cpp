#include<iostream>
#include<vector>

using namespace std;

int searching(vector<int> v, int n, int key)
{
    int s = 0, e = n-1, mid;
    while (s<=e){
        mid = (s + e)/2;
        if (v[mid]==key)
            return mid;
        else if (v[mid]>=key&&v[s]<=key)
            e = mid - 1;
        else if (v[mid]<=key&&v[e]>=key)
            s = mid + 1;
        else if (v[mid]>=key&&v[s]>=key)
            s = mid + 1;
        else if (v[mid]<=key&&v[e]<=key)
            e = mid - 1;
    }
    return -1;
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
    cin>>key;
    int ans = searching(v, n, key);
    cout<<ans;
    return 0;
}
