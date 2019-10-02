#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 0; i <= n/2; i++){
        for(int j = n-2; j >= 2*i; j--){
            cout<<"  ";
        }
        for(int j = i+1; j >= 1; j--){
            cout<<j<<" ";
        }
        for(int j = 1; j < 2*i; j++){
            cout<<"  ";
        }
        for(int j = 1; j <= i+1; j++){
            if(i>0)
                cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i = n/2; i > 0; i--){
        for(int j = n; j >= 2*i; j--){
            cout<<"  ";
        }
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        }
        for(int j = 3; j < 2*i; j++){
            cout<<"  ";
        }
        for(int j = 1; j < i+1; j++){
            if(i>1)
                cout<<j<<" ";
        }
        cout<<endl;
    }
	return 0;
}
