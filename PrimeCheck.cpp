#include<iostream>
#include<cmath>

using namespace std;

int main() {
  int n,i;
  cin>>n;
  if (n>=4){
  for(i=2;i<=n/2;i++){
    if (n%i==0){
      cout<<n<<i<<"Not Prime"<<endl;
      break;
    }
    else if (n%i!=0&&i>=(n/2)-1){
      cout<<n<<i<<"Prime"<<endl;
      break;
    }
  }
  }
  else
    cout<<"prime";
	return 0;
}
