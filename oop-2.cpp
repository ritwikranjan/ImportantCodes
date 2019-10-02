#include <iostream>
#include<cmath>

using namespace std;

class number
{
	int no;
public:
	number(int a)
	{
		no = a;
	}
	int sumOfDigits()
	{
		int a = no;
		int sum = 0;
		while(a>0){
			sum = sum + (a%10);
			a/=10;
		}
		return sum;
	}
	int reverseOfDigits()
	{
		int arr[10]={0},i = 0, newno = 0, a = no;
		while(a>0){
			arr[i]=(a%10);
			a/=10;
			i++;
		}
		for(int j =0; j < i; j++){
			newno+=ceil(arr[j]*pow(10,i-j-1));
		}
		return newno;
	}
	void inWord()
	{
		int a = no;
		a = reverseOfDigits();
		string word[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
		while(a>0){
			cout<<word[a%10]<<" ";
			a/=10;
		}
	}
	bool isArmstrong()
	{
		int a = no;
		int sum = 0;
		while(a>0){
			sum+=(pow((a%10),3));
			a/=10;
		}
		return sum == no;
	}
	bool isPrime()
	{
		for(int i = 2; i <= sqrt(no); ++i)
		{
			if(no % i == 0)
			{
				return false;
			}
		}
		return true;
	}
};

int main()
{
	int n;
	cout<<"Input a number ";
	cin>>n;
	number no(n);
	cout<<"sum "<<no.sumOfDigits()<<endl<<"reverse "<<no.reverseOfDigits()<<endl<<"In Words: ";
	no.inWord();
	cout<<endl<<"Armstrong "<<no.isArmstrong()<<endl<<"Prime "<<no.isPrime()<<endl;
	return 0;
}
