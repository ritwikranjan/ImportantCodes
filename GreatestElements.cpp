#include<iostream>
#include<stack>
using namespace std;
int main() {
    int n,a[100];
    cin>>n;
    stack<int> s;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0;;i++,i%=n){
        for(int j = i+1;j!=i;j++,j%=n){
            if(a[j]>a[i]){
                s.push(a[j]);
                break;
            }

        }
    }

	return 0;
}
