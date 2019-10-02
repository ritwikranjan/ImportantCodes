#include<iostream>
using namespace std;
int main() {
  int N;
  cin>>N;
  int newN = 0;
  while (N > 0){
    newN=(newN*10)+(N%10);
    N=N/10;

  }
  cout << newN;
	return 0;
}
