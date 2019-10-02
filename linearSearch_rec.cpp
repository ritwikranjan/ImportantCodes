#include<iostream>

using namespace std;

int linearSearch(int *arr, int i, int n, int key)
{
    if(*(arr + i)==key)
        return i;
    else if(i==n)
        return -1;
    else
        return linearSearch(arr,i+1,n,key);
}
int main()
{
    int arr[100]={0};
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int i = 0;
    cout<<linearSearch(arr,i,n,key);
}
