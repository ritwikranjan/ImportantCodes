#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y)
{
	if(y%x==0){
		return x;
	}
	int hcf = gcd(y%x,x);
	return hcf;
}

int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	cout<<gcd(a,b);
	return 0;
}
