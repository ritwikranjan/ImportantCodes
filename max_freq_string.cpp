#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int a[265]={0},maxi = 0;
    string s1;
    int ch;
    cin>>s1;
    for(int i = 0; i < s1.size(); i++){
        for(int j = 0; j < 256; j++){
            if(s1[i]==j){
                a[j]++;
            }
        }
    }
    for(int j = 0; j < 256; j++){
        if(a[j]>maxi)
            {maxi = a[j];
            ch = j;}
    }
    cout<<char(ch);
}
