#include <iostream>

using namespace std;

int main()
{
	int a[10][10]={0},b[100]={0},o = 0;
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			b[o] = a[i][j];
			o++;
		}
	}
	for(int i = 0; i < n*m; i++){
		cout<<b[i];
	}


}
