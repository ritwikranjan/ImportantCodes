#include <iostream>
using namespace std;

bool array_is_sorted(int a[],int n)
{
    if(n == 1)
        return 1;
    if(a[0]<=a[1]&&array_is_sorted(a+1,n-1))
        return 1;
    else
        return 0;
}

int main()
{
    int a[5]={1,2,3,6,5};
    int n = 5;
    cout<<array_is_sorted(a,n);
}
