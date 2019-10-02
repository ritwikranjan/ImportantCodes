#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string s1;
    cin>>s1;
    for(int i = 0; i < (s1.size())-1; i++){
        cout<<s1[i]<<s1[i+1]-s1[i];
    }
    cout<<s1[s1.size()-1];
    return 0;
}
