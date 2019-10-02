#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    for(int i = 0; i < s1.length(); i++){
        for(int j = i; j< s1.length(); j++){
            for(int k = i; k<= j; k++){
                cout<<s1[k]<<" ";
            }
            cout<<endl;
        }
    }
}
