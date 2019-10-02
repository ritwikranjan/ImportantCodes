#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack <int> *s,*s1,s2;
	s = new stack<int>;
	s1=s;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int temp;
		cin>>temp;
		s->push(temp);
	}
	while(!s->empty()){
		int a=0;
		int temp = s->top();
		while(!s1->empty()){
			s1->pop();
			if(temp<(s1->top())){
				cout<<temp<<" "<<s1->top()<<endl;
				a++;
				break;
			}
			else{
				a++;
			}
		}
		s2.push(a);
		s->pop();
		cout<<s->top()<<endl;
		s1 = s;
	}
	while(!s2.empty()){
		cout<<s2.top()<<" ";
		s2.pop();
	}


}
