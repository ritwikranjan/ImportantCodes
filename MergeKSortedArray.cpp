#include <bits/stdc++.h>

using namespace std;

int main()
{
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > p;
	int n;
	cin>>n;
	vector<vector<int> > arr(n);
	vector<int> index(n,0),ans,size;
	for(int i = 0; i < n; i++){
		int temp;
		cin>>temp;
		size.push_back(temp);
		arr[i] = vector<int> (temp);
		for(int j = 0; j < temp; j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		pair<int,int> temp(arr[i][index[i]],i);
		p.push(temp);
        index[i]++;
	}
	int x = n*n;
	while(x--){
		pair<int,int> temp = p.top();
		ans.push_back(temp.first);
		int i = temp.second;
		p.pop();
		if(index[i]<size[i]){
			temp.first = arr[i][index[i]];
			index[i]++;
			p.push(temp);
		}

	}
	for(int i = 0; i < ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
