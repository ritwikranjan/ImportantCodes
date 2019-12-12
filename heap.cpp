#include <bits/stdc++.h>

using namespace std;

class heap
{
	vector<int> v;
	bool minheap;
	bool compare(int a, int b)
	{
		if(minheap){
			return a<b;
		}
		else{
			return a>b;
		}
	}
	void heapify(int i)
	{
		int left = 2*i;
		int right = 2*i+1;
		int minIndex = i;
		if(left<v.size()&&compare(v[left],v[minIndex])){
			minIndex = left;
		}
		if(right<v.size()&&compare(v[right],v[minIndex])){
			minIndex = right;
		}
		if(minIndex!=i){
			swap(v[i],v[minIndex]);
			heapify(minIndex);
		}

	}
public:
	heap(bool type=true)
	{
		minheap = type;
		v.push_back(-1);
	}
	void push(int data)
	{
		v.push_back(data);
		int index = v.size() - 1;
		int parent = index/2;
		while(index>1&&compare(v[index],v[parent])){
			swap(v[index],v[parent]);
			index = parent;
			parent = index/2;
		}
	}
	void pop()
	{
		int index = v.size()-1;
		swap(v[1],v[index]);
		v.pop_back();
		heapify(1);
	}
	bool empty()
	{
		return v.size()==1;
	}
	int top()
	{
		return v[1];
	}
};

int main()
{
	heap h(1);
	h.push(19);
	h.push(10);
	h.push(51);
	h.push(12);
	h.push(16);
	while(!h.empty()){
		cout<<h.top()<<"<-";
		h.pop();
	}
	return 0;
}
