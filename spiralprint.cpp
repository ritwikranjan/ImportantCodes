#include <iostream>
using namespace std;
int main()
{
    int a[10][10] = {0}, R, C, c = 0;
    cin>>R>>C;
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++, c++){
            a[i][j] = c;
        }
    }
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int startrow = 0, endrow = R - 1, startcolm = 0, endcolm = C-1;
        while(startrow<=endrow){
            for (int i = startcolm; i<= endcolm; i++){
                cout<<a[startrow][i]<<" ";
            }
            startrow++;
            for (int i = startrow; i<= endrow; i++){
                cout<<a[i][endcolm]<<" ";
            }
            endcolm--;
            if(startrow<=endrow){
            for (int i = endcolm; i>= startcolm; i--){
                cout<<a[endrow][i]<<" ";
            }
            endrow--;
            }
            if(endcolm>=startcolm){
            for (int i = endrow; i>= startrow; i--){
                cout<<a[i][startcolm]<<" ";
            }
            startcolm++;
            }
        }
}
