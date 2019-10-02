#include<bits/stdc++.h>
using namespace std;

class soldier
{
public:
	unsigned long long int pos;
	unsigned int bomb;
};

int main() {
	int test;
	cin>>test;
	for(int t = 0; t < test; t++){
		vector<soldier> s;
		unsigned long int n;
		cin>>n;
		for(unsigned long int i = 0; i < n; i++){
			soldier temp;
			cin>>temp.pos;
			s.push_back(temp);
		}
		for(unsigned long int i = 0; i < n; i++){
			cin>>s[i].bomb;
		}

		unsigned long long int cal = 0;

		for(unsigned long int i = 0; i < n-1; i++){
			for(unsigned long int j = i +1; j < n; j++){
				unsigned long long int temp;
				if(s[i].pos>s[j].pos){
					temp = s[i].pos-s[j].pos;
				}
				else{
					temp = s[j].pos - s[i].pos;
				}
				cal += temp*max(s[i].bomb,s[j].bomb);
			}
		}
		cout<<cal<<endl;
		s.erase(s.begin(),s.end());
	}
	return 0;
}
