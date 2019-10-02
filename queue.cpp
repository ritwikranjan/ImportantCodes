#include <iostream>
#include <list>
using namespace std;

template<typename t>
class queue
{
	list <t> v;
public:
	void push(t data)
	{
		v.push_back(data);
	}
	bool empty()
	{
		return v.empty();
	}
	void pop()
	{
		if(!empty()){
			v.pop_front();
		}
	}
	int front()
	{
		return v.front();
	}
};

int main()
{
	queue <int> q;
	q.push(5);
	q.push(7);
	q.push(6);while(!q.empty()){
		cout<<q.front();
		q.pop();
	}
}
