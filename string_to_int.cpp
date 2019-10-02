#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
   string str;
   cin>>str;
   int a[10]={0};
   int n = str.length();
   for(int i = 0; i < n && str[i]<=57; i++)
   {
       a[i] = str[i]%48;
       cout<<a[i]<<" ";
   }
   int num =0;
   for(int i = 0; i<n; i++)
   {
       cout<<num<<" ";
       num = num + ((int)(pow(10,(n-i-1))+0.5)*a[i]);
   }
   cout<<num;
}
