#include <iostream>

using namespace std;

class sparse
{
public:
	int row;
	int col;
	int val;
};

sparse[] input(int *a, int n, int m)
{
	sparse s[100];
	int k = 0;
	for(int i = 0; i <n; i++){
		for(int j = 0; j <m; j++){
			cin>>a[i][j];
			if(a[i][j]!=0){
				s[k].row = i;
				s[k].col = j;
				s[k].val = a[i][j];
				k++;
			}
		}
	}
}

int main()
{
		sparse s[100];
}
