#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	v.reserve(10);

	for(int i = 0; i < 50; i++){
		v.push_back(i);
		cout<<v.size()<<" "<<v.capacity()<<endl;
	}

	cout<<v.size()<<endl;

}
