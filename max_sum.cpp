#include<iostream>
#include<vector>
using namespace std;
int main() {
  int t,n;
  vector <int> v,c;
  cin>>t;
  for(int test = 1; test<=t; test++){
    cin>>n;
    int cs = 0,ms = 0;
    for(int i = 0; i < n; i++){
      int temp;
      cin>>temp;
      v.push_back(temp);
      int csum = 0;
      csum = csum + temp;
      c.push_back(csum);
    }
    for (int i = 0; i < n; i++){
      for (int j = i; j < n; j++){
        cs = c[j];
        if(cs >= ms){
          ms = cs;
        }
      }
    }
    cout<<ms<<endl;
    v.erase(v.begin(),v.end());
  }
	return 0;
}
