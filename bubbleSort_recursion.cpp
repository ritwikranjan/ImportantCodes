#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int *arr, int n, int j)
{
    if (n == 1){
        return;
    }
    if(j==n-1){
        return bubbleSort(arr,n-1,0);
    }
    if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    bubbleSort(arr,n,j+1);
}
int main()
{
    int arr[5]={5,4,2,9,7};
    bubbleSort(arr,5,0);
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
}
