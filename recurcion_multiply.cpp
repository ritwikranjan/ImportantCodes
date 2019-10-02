#include<iostream>

using namespace std;

int multiply(int a,int b)
{   if(b==0)
        return 0;
    int c;
    if (b < 0)
        c = -b;
    else
        c=b;
    int ans = a + multiply(a,c-1);
    if(b < 0)
        return -ans;
    else
        return ans;

}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b)<<endl;
}
