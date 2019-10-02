#include <iostream>

using namespace std;

int main()
{
    int a[5]={4,7,2,9,1};
    for (int i = 0; i < 5 ; i++){
        for (int j = 0; j < 5 - i; j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < 5 ; i++){
        cout<<a[i]<<" ";
    }

}
