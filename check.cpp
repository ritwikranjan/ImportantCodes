#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(100);
    v.pop_back();
    cout<<v[2]<<endl;
    v.reserve(100);
    cout<<v.size();
    int a;
    cin>>a;
}
