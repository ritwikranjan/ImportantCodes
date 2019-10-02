#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string s1;
    cin>>s1;
    for (int i = 0; i < s1.size(); i++){
        if(s1[i]>=65&&s1[i]<=90){
            cout<<endl<<s1[i];
        }
        else
            cout<<s1[i];
    }
    return 0;
}
