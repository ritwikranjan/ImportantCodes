#include <iostream>

using namespace std;

int main()
{
    int a[20]={1,5,4,0,2,3,6,4,3,1,0,2,4,6,4,2,3,4,5,6},counting[7] = {0};

    int maxi = a[0];
    for(int i = 0; i < 20; i++){
        if (a[i]>=maxi){
            maxi = a[i];
        }
    }
    for (int i = 0; i <= maxi ; i++){
        for(int j = 0; j < 20; j++){
            if (a[j]==i){
                counting[i]++;
            }
        }
    }
    for (int i = 0; i < 7 ; i++){
        while(counting[i]>0){
            cout<<i<<" ";
            counting[i]--;
        }
    }
    return 0;
}

