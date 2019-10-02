#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    int n,z = 0, sum,b[10] = {0},c[10] = {0},d[10]={0};
    cin>>n;
    for(int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cin>>sum;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          for(int k = 0; k < n; k++){
            if(i!=j&&j!=k&&i!=k){
                int temp = v[i] + v[j]+v[k];
                if (sum == temp && v[j]>=v[i]&&v[k]>=v[j]){
                    b[z] = v[i];
                    c[z] = v[j];
                    d[z] = v[k];
                    z++;
                }
            }
          }
        }
    }
    for(int i = 0; i < z; i++){
        cout<<b[i]<<", "<<c[i]<<" and "<<d[i]<<endl;
    }
}
