#include<iostream>
using namespace std;
int main() {
    int a[10][10]={0},m,n;
    cin>>m>>n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        if(i%2==0){
            for(int j = 0; j < n; j++){
                cout<<a[j][i]<<", ";
            }
        }
        else{
            for(int j = n - 1; j >= 0; j--){
                cout<<a[j][i]<<", ";
            }
        }
    }
	return 0;
}
