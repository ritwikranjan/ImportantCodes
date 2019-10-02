#include <iostream>

using namespace std;
class operation{
   int x,y,z,i;
public:
    void input(){
    cin>>x>>y;
    }
  void compare(){
  if(x>y){
    cout<<"Greatest no. is: "<<x<<endl;
  }
  else{
    cout<<"Greatest no. is: "<<y<<endl;
  }
  }
  void addition(){
  z=x+y;
  cout<<"Sum is: "<<z<<endl;
  }
  void subtraction(){
  if(x>y){
    i=x-y;
    cout<<"Difference is: "<<i<<endl;
  }
  else{
    i=y-x;
    cout<<"Difference is: "<<i<<endl;
  }
  }


};
int main()
{
    operation o;
    o.input();
    o.compare();
    o.addition();
    o.subtraction();
    return 0;
}
