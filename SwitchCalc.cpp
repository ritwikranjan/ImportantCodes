#include<iostream>

using namespace std;

int main(){
    label:
    char check;
    int a,b,c;
    cin>>check>>a>>b;
    int z = int(check);
    switch(z)
    {
           case 43: cout<<a+b; goto label;
           case 45: cout<<a-b; goto label;
           case 42: cout<<a*b; goto label;
           case 47: cout<<a/b; goto label;
           case 37: cout<<a%b; goto label;
           case 'X': break;
           case 'x': break;
           default: cout<<"Invalid operation. Try again."; goto label;
    }
    return 0;
}
