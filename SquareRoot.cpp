#include<iostream>
using namespace std;

int main()
{
    float i,inc,p,n;
    cin>>n>>p;
    inc = 1;
    for (int k = 0; k<=p ; k++){
        while (i*i<=n){
            i=i+inc;
        }
        i=i-inc;
        inc=inc/10;

    }
    cout<<i;

}

