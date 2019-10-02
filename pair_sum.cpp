#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    int n,z = 0, sum,b[10] = {0},c[10] = {0};
    cin>>n;
    for(int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cin>>sum;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i!=j){
                int temp = v[i] + v[j];
                if (sum == temp && v[i]>=v[j]){
                    b[z] = v[j];
                    c[z] = v[i];
                    z++;
                }
            }
        }
    }
    for(int i = 0; i < z; i++){
        cout<<b[i]<<" and "<<c[i]<<endl;;
    }
}
