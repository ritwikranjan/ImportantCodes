#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[100];
    for (int i = 0; i<=n; i++){
        getline(cin,s[i]);
    }
    string key;
    getline(cin,key);
    for (int i = 0; i<=n; i++){
        if (key == s[i]){
            cout<<"found at "<<i;
            break;
        }
        else if (i == n){
            cout<<"not found";
        }
    }
}
