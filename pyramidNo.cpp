#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i = 0; i <n; i++){
		for(int j = i+1; j < n; j++){
			cout<<"  ";
		}
		for(int j = 1; j <=2*i+1; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(int i = n-1; i>0; i--){
		for(int j = i; j < n; j++){
			cout<<"  ";
		}
		for(int j = 2*i-1; j > 0; j--){
			cout<<2*i-j<<" ";
		}
		cout<<endl;
	}
}
