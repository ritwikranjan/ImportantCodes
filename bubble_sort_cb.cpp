#include<iostream>
#include<algorithm>
using namespace std;

void bubblesort(int *a, int n) {
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= n-i; j++){
			if (*(a+j)>*(a+j+1)){
				swap(*(a+j),*(a+j+1));
			}

		}
	}
}





int main() {
	unsigned int n;
	int a[100];
	cin>>n;
	for (int i = 0; i < n; i++){
		cin>>a[i];
	}
	/*for (int i = 0; i < n-1; i++){
		for (int j = 0; j <= i; j++){
			if (a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}*/
	bubblesort(a,n);
	for (int i = 0; i < n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
