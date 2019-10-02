#include<iostream>
#include<vector>

using namespace std;

float searching(int n, int p)
{
    int s = 0, e = n, mid = (s + e)/2;
    while (s<=e){
        if (mid*mid==n)
            return mid;
        else if (mid*mid>n){
            e = mid - 1;
        }
        else if (mid*mid<n){
            s = mid + 1;
        }
        mid = (s + e)/2;
    }
    float ans = mid;
    float i = 0.1;
    for (int j = 1; j<= p; j++,i=i/10){
        while(ans*ans <= n){
            ans = ans + i;
        }
        ans = ans - i;
    }
    ans = ans - i;
    return ans;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<searching(n,p);
}
