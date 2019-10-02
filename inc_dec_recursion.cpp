#include <iostream>

using namespace std;

void dec(int n)
{
    if(n == 1){
        cout<<1<<endl;
    }
    else{
        cout<<n;
        dec(n-1);
    }
}
void inc(int n)
{
    if(n == 1){
        cout<<1;
    }
    else{
        inc(n-1);
        cout<<n;
    }
}
int main()
{
    dec(9);
    inc(9);
    return 0;
}
