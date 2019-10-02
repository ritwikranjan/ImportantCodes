#include<iostream>

using namespace std;

int main() {
	int a[30][30];
	int n,m;
	cin>>n>>m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	int key;
	cin>>key;
	int found = 0;
	for(int i = 0; i < m; i++){
        int strow=0,enrow=n,midrow=n/2;
        while(strow<enrow)
        {
            if(a[midrow][i]==key){
                found = 1;
            }
            else if(a[midrow][i]<key){
                strow = midrow;
            }
            else if(a[midrow][i]>key){
                enrow = midrow;
            }
        }
	}
	cout<<found;
}
