#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n] = {0};
    for(int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }

    sort(a[0],a[n-1]+n);

    for(int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int key,ans = 0, i = n-1, j= 0;
    cin>>key;
    while(i<n&&j<n&&i>=0&&j>=0){
        ans = a[i][j];
        if(key>ans){
            j++;
        }
        else if (key<ans){
            i--;
        }
        else if(key == ans){
            break;
        }
    }
    if (key == ans)
        cout<<"found at "<<i<<" "<<j;
    else
        cout<<"not found";
}
