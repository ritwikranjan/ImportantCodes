#include <iostream>

using namespace std;

int main()
{
    int a[5]={4,7,2,9,1};
    for (int i = 0; i < 5 ; i++){
        int mini = i;
        for (int j = i; j < 5; j++){
            if (a[mini]>a[j+1]){
                mini = j+1;
            }
        }
        int temp = a[i];
        a[i]=a[mini];
        a[mini] = temp;
    }
    for (int i = 0; i < 5 ; i++){
        cout<<a[i]<<" ";
    }

}
