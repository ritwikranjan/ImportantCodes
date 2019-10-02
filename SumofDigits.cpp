#include<iostream>
using namespace std;
int main() {
  int N,a,b=0;
  cin>>N;
  for (int i = 0; i < N; i++){
    cin>>a;
    int j = 1;
    while (a > 0){

      b=b+(a%10)*j;

      a=a/10;

      j=j*2;
    }
    cout<<b<<endl;
    b = 0;

  }
	return 0;
}
