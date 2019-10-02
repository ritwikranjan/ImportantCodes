#include<iostream>
#include<vector>
using namespace std;
int main() {
  int t,n;
  vector <int> v;
  cin>>t;
  for(int test = 1; test<=t; test++){
    cin>>n;
    int cs = 0,ms = 0;
    for(int i = 0; i < n; i++){
      int temp;
      cin>>temp;
      v.push_back(temp);
    }
    int maxv = v[0], maxi = 0;
    for (int i = 0; i < n; i++){
        if(v[i]>maxv){
            maxv = v[i];
            maxi = i;
        }
    }
    for (int i = maxi; i < n; i++){
      cs = cs + v[i];
      if(cs < 0){
        cs = 0;
      }
      if(ms <= cs){
        ms = cs;
      }
    }
    for (int i = 0; i < maxi; i++){
      cs = cs + v[i];
      if(cs < 0){
        cs = 0;
      }
      if(ms <= cs){
        ms = cs;
      }
    }
    cout<<ms<<endl;
    v.erase(v.begin(),v.end());
  }
	return 0;
}
