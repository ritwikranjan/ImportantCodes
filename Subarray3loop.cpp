#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, maxi = INT_MIN, start, stop;
    cin>>n;
    int a[n];
    for (int i = 0; i<n; i++){
        cin>>a[i];
    }
    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            for (int k = i; k<=j; k++){
                sum = sum + a[k];
            }
            if (sum>=maxi){
                maxi = sum;
                start = i;
                stop = j;
            }
            sum = 0;
        }
    }
    for (int i = start; i<=stop; i++){
        cout<<a[i];
    }
    return 0;
}
