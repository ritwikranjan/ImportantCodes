#include <iostream>

using namespace std;

int MAX = 100,stack[100],top=-1;

void push(int val)
{
	if(top>=MAX-1){
		cout<<"Stack Overflow"<<endl;
		return;
	}
	else{
		top++;
		stack[top] = val;
		return;
	}
}

void pop()
{
	if(top==-1){
		cout<<"Stack Underflow"<<endl;
		return;
	}
	else{
		top--;
	}
}

int topp()
{
	if(top>-1){
		return stack[top];
	}
	else{
		cout<<"No Stack";
	}
}

int main()
{

}
