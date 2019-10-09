#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
int a[500];
    for(int i=1;i<=n;i++)
    {

    cin>>a[i];
        }
for (int i=1;i<=n;i++)
{
    for(int j=i;j<=n;j++)
    {
        for (int k=i;k<=j;k++)
        {
            cout<<a[k];
    }

   cout<<endl;
    }
}

return 0;
}
