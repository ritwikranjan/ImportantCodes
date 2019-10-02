#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    int n, maxi = INT_MIN;
    cin>>n;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i = 0; i<n; i++){
        if (v[i]>=maxi){
            maxi = v[i];
        }
    }
    cout<<maxi;
}
