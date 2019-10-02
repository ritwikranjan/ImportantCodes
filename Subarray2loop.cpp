#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, maxi = INT_MIN, start, stop;
    cin>>n;
    int a[n],cums[n];
    cin>>a[0];
    for (int i = 1; i<n; i++){
        cin>>a[i];
        cums[i]=cums[i-1]+a[i];
    }
    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
              sum = cums[j]-cums[i-1];
            if (sum>=maxi){
                maxi = sum;
                start = i;
                stop = j;
            }
            sum = 0;
        }
    }
    for (int i = start; i<=stop; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
