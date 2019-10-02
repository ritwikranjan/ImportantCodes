#include <iostream>
using namespace std;
int main()
{
    int a[100][100] = {0}, n;
    cin>>n;
    int b = n;
    int startrow = 0, endrow = 2*n-2, startcolm = 0, endcolm = 2*n-2;
        while(startrow<=endrow && startcolm<=endcolm){
            for (int i = startcolm; i<= endcolm; i++){
                a[startrow][i]=n;
            }
            startrow++;
            for (int i = startrow; i<= endrow; i++){
                a[i][endcolm]=n;
            }
            endcolm--;
            for (int i = endcolm; i>= startcolm; i--){
                a[endrow][i]=n;
            }
            endrow--;
            for (int i = endrow; i>= startrow; i--){
                a[i][startcolm]=n;
            }
            startcolm++;
            n--;
        }
        for(int i = 0; i < 2*b-1; i++){
            for(int j = 0; j < 2*b-1; j++){
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }

}
