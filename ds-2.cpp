#include <iostream>

using namespace std;


void insertatP(int *a, int *n, int p)
{
	int temp[100];
	for(int i = p; i < *n; i++){
		temp[i]= a[i];
	}
	cin>>a[p];
	for(int i = p+1; i <= *n; i++){
		a[i]=temp[i-1];
	}
	*n = *n + 1;
}

void deleteatP(int*a,int*n, int p)
{
	int temp[100] = {0};
	for(int i = p + 1; i < *n; i++){
		temp[i]= a[i];
	}
	for(int i = p; i < *n; i++){
		a[i]=temp[i+1];
	}
	*n = *n - 1;
}

int main()
{
	int a[100] = {0},n,p,q ;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	cin>>p;
	insertatP(a,&n,p);
	for(int i = 0; i < n; i++){
		cout<<a[i];
	}
	cin>>q;
	deleteatP(a,&n,q);
	for(int i = 0; i < n; i++){
		cout<<a[i];
	}
}
