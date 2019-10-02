#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename t>
class stack
{
	vector <t> v;
public:
	void push(t data)
	{
		v.push_back(data);
	}
	bool empty()
	{
		return v.size()==0;
	}
	void pop()
	{
		if(!empty()){
			v.pop_back();
		}
	}
	t top()
	{
		return v[v.size()-1];
	}
};
void transfer(stack <int> &s1, stack <int> &s2,int n)
	{
		for(int i = 0; i < n; i++){
			s2.push(s1.top());
			s1.pop();
		}
	}

stack<int> reverse(stack<int> st,int n)
{
	stack <int> s1;
	for(int i = 0; i < n;i++){
		int temp = st.top();
		st.pop();
		transfer(st,s1,n-i-1);
		st.push(temp);
		transfer(s1,st,n-i-1);
	}
	return st;
}
stack<int> recRevStack(stack<int> st, int n)
{
	if(n == 0){
		return st;
	}
	stack<int> s1;
	int temp = st.top();
	st.pop();
	st = recRevStack(st,n-1);
	transfer(st,s1,n-1);
	st.push(temp);
	transfer(s1,st,n-1);
	return st;
}

int main()
{
	stack <int> s;
	int n;
	cin>>n;
	for(int i = 0; i < n;i++)
	{
		s.push(i);
	}
	/*for(int i = 0; i < n;i++){
		int temp = s.top();
		s.pop();
		transfer(s,s1,n-i-1);
		s.push(temp);
		transfer(s1,s,n-i-1);

	}*/
	s= recRevStack(s,n);
	s= reverse(s,n);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}

	return 0;
}
