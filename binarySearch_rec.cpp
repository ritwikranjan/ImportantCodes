#include<iostream>

using namespace std;

int binarySearch(int *arr, int start, int end1,int n, int key)
{
    int mid = (start + end1)/2;
    if (start==n-1||end1==0||start==mid)
        return -1;
    else if(arr[mid]==key)
        return mid;
    else if(arr[mid]>key)
        return binarySearch(arr,start,mid,n,key);
    else if(arr[mid]<key)
        return binarySearch(arr,mid,end1,n,key);
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
    int start = 0, end1 = n;
    cout<<binarySearch(arr,start,end1,n,key);
}

