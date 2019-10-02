#include <iostream>

using namespace std;

int main()
{
    int a[5]={2,7,4,9,1},i,j;
    for (i = 1; i < 5 ; i++){
        int nos = a[i];
        for(j = i-1; j >= 0 && a[j]>= nos; j--){
            a[j+1] = a[j];
        }
        a[j+1]=nos;
    }
    for (int i = 0; i < 5 ; i++){
        cout<<a[i]<<" ";
    }

}
