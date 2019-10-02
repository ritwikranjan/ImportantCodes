#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,0,6,9,8,4,5},i,j;
    for (i = 0; i < 7 ; i++){
        if (i%2==0 && a[i]<=a[i+1]){
            swap(a[i],a[i+1]);
        }
        if (i%2==1 && a[i]>=a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    for (int i = 0; i < 8 ; i++){
        cout<<a[i]<<" ";
    }

}
