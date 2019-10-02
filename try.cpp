#include<iostream>
using namespace std;

void swapper(int &x, int &y){
     int i = x;
     x = y;
     y = i;

}

int main(){
    int a,b;
    cin>>a>>b;
    swapper(a,b);
    cout<<a<<' '<<b<<endl;
}
