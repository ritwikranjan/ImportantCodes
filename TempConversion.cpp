#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for ( ;a<=b ;a+=c ){
        int d=0.556*(a-32);
        cout<<a<<" "<<d<<endl;
    }
}
