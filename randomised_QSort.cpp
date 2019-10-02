#include <iostream>
#include <algorithm>
#include  <ctime>
#include <cstdlib>

using namespace std;

void random(int *a,int s, int e)
{
    srand(time(NULL));
    for(int i = e; i > s; i--){
        int temp = rand()%(i+1);
        swap(a[i],a[temp]);
    }
}

int part(int *a, int s, int e)
{
    int i = s-1;
    int pivot = a[e];
    for(int j = s; j < e; j++){
        if(a[j]<=pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[e],a[i+1]);
    return i+1;
}

void quickSort(int *arr, int s, int e)
{
    if(s>=e)
        return;
    int p = part(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    int a[] = {6,5,9,4,2,8,1,7};
    quickSort(a,0,7);
    for(int i = 0; i < 8; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
