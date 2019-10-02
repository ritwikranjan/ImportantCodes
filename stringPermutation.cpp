#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void permutation(char *In, int i)
{
	if(In[i]=='\0'){
		cout<<In<<" ";
		return;
	}
	for(int j = i; In[j]!='\0'; j++){
		swap(In[j],In[i]);
		permutation(In,i+1);
		swap(In[j],In[i]);
	}
}

int main()
{
	char s[100];
	cin>>s;
	permutation(s,0);
	return 0;
}
