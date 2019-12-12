#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr,int key){
    int index = -1;
    for (int i = 0; i < arr.size()-1; i++) {
        if(arr[i]==key){
            index = i;
        }
    }
    return index;
}
int count(vector<int> arr,int key){
    int c = 0;
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i]==key){
            c++;
        }
    }
    return c;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    v.push_back(0);
	    for (int i = 1; i < n; i++) {
	        int k = linearSearch(v,v[i-1]);
	        int x = 0;
	        if(k!=-1){
	            x = i - k - 1;
	        }
	        v.push_back(x);
	    }
	    cout<<count(v,v[n-1])<<endl;
	    v.clear();
	}
	return 0;
}
