#include <iostream>
#include <vector>

using namespace std;

/*void inputArray(int* &a; int n)
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
}

void printArray(int *a)
{
	int i,j = 0;
	for(i = 0; a[i][j]==0; i++){
		for(j = 0; a[i][j]==0; j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}

istream& operator>>(istream& is, int* &a)
{
	int n;
	cin>>n;
	inputArray(a,n);
	return is;
}

ostream& operator<<(ostream& out, int *a)
{

}*/

int main()
{
	int a[100][100] = {0},ans = 0,n ;
	cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((i==j)||(i+j==n-1)){
				ans+=a[i][j];
			}
		}
	}
	cout<<ans;
	return 0;
}
