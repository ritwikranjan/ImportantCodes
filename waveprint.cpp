#include <iostream>
using namespace std;
int main()
{
    int a[10][10] = {0}, R, C;
    cin>>R>>C;
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < R; i++){
        if (i%2==0){
            for (int j = 0; j < C; j++){
                cout<<a[j][i]<<", ";
            }
        }
        else{
            for (int j = C - 1; j>=0; j--){
                cout<<a[j][i]<<", ";
            }
        }
    }
    cout<<"END";
}
