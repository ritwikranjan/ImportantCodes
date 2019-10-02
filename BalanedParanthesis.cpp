#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	string query;
	stack<char> bracket;
	int i = 0;
	cin>>query;
	bool response = true;
	while(i<query.size()){
		if(query[i]=='('){
			bracket.push(query[i]);
		}
		else if(query[i]==')'){
			if(bracket.empty()){
				response = false;
				cout<<response;
				return 0;
			}
			else{
				bracket.pop();
			}
		}
		if(i == (query.size()-1)){
			if(!bracket.empty()){
				response = false;
			}
		}
		i++;
	}
	cout<<response;
	return 0;
}
