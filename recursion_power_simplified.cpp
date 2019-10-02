#include<iostream>

using namespace std;

int pow(int a,int b)
{
    int ans;
    if(b==0)
        return 1;
    if(b%2==0)
        ans = pow(a,b/2) * pow(a,b/2);
    else
        ans = a * pow(a,b/2) * pow(a,b/2);
    return ans;
}

int main()
{
    cout<<pow(2,27);
}
