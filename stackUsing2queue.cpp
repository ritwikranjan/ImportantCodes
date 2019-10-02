#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

class stack
{
	queue<int> *q1,*q2;
public:
	stack()
	{
		q1 = new queue<int>;
		q2 = new queue<int>;
	}
	void push(int data)
	{
		q1->push(data);
	}
	int top()
	{
		int temp;
		while(!q1->empty()){
			temp = q1->front();
			q2->push(temp);
			q1->pop();
		}
		swap(q1,q2);
		return temp;
	}
	void pop()
	{
		int n = q1->size();
		for(int i = 0; i < n-1; i++){
			q2->push(q1->front());
			q1->pop();
		}
		q1->pop();
		swap(q1,q2);
	}
};

int main()
{
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();
	cout<<s.top();
	s.push(5);
	cout<<s.top();
	s.pop();
	cout<<s.top();
	return 0;
}
