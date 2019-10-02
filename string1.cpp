#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str;
    int n;
    getline(cin,str);
    cin>>n;
    int k = str.length();
    for (int i = n; i<= k-1; i++){
        cout<<str[i];
    }
    for (int i = 0; i<= n-1; i++){
        cout<<str[i];
    }
    return 0;
}
