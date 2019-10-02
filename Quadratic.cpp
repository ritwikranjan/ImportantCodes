#include<iostream>
#include<cmath>
using namespace std;
int main() {
  int a,b,c,z = 0;
  cin>>a>>b>>c;
  float x,y;
  z = (b*b)-(4*a*c);

  if (z>0){
    cout<<"Real and Distinct \n";
    x = (-b+sqrt(z))/(2*a);
    y = (-b-sqrt(z))/(2*a);
    cout<<y<<" "<<x;
  }
  else if (z==0){
    cout<<"Real and Equal \n";
    x = (-b+sqrt(z))/(2*a);
    y = (-b-sqrt(z))/(2*a);
    cout<<x<<" "<<y;
  }
  else if (z<0){
    cout<<"Imaginary";
  }

	return 0;
}

