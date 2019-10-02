#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], cs = 0, ms = 0;
    for (int i = 0; i<n; i++){
        cin>>a[i];
        cs = cs + a[i];
        if (cs<0)
            cs = 0;
        ms = max(cs,ms);
    }
    cout<<ms;
    return 0;
}
