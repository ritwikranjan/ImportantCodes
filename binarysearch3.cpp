#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int binarysearch(vector<int> a, int n, int key)
{
    int s = 0, e = n - 1, mid, ans = -1;
    while (s<=e){
        if ((s+e)%2==0)
            mid = (s + e)/2;
        else
            mid = (s + e)/2 + 1;
        if (a[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if (a[mid]<key)
            s = mid + 1;
        else if (a[mid]>key)
            e = mid - 1;
        }
    return ans;
}

int main()
{
    vector <int> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int key;
    cin>>key;
    int ans = binarysearch(a,n,key);
    cout<<ans;
}
