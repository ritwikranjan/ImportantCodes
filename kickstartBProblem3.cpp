// C++ program to decode a string recursively 
// encoded as count followed substring 
#include<bits/stdc++.h> 
using namespace std; 

// Returns decoded string for 'str' 
string decode(string str) 
{ 
	stack<int> integerstack; 
	stack<char> stringstack; 
	string temp = "", result = ""; 

	// Traversing the string 
	for (int i = 0; i < str.length(); i++) 
	{ 
		int count = 0; 

		// If number, convert it into number 
		// and push it into integerstack. 
		if (str[i] >= '0' && str[i] <='9') 
		{ 
			while (str[i] >= '0' && str[i] <= '9') 
			{ 
				count = count * 10 + str[i] - '0'; 
				i++; 
			} 

			i--; 
			integerstack.push(count); 
		} 

		// If closing bracket ')', pop elemment until 
		// '(' opening bracket is not found in the 
		// character stack. 
		else if (str[i] == ')') 
		{ 
			temp = ""; 
			count = 0; 

			if (! integerstack.empty()) 
			{ 
				count = integerstack.top(); 
				integerstack.pop(); 
			} 

			while (! stringstack.empty() && stringstack.top()!='(' ) 
			{ 
				temp = stringstack.top() + temp; 
				stringstack.pop(); 
			} 

			if (! stringstack.empty() && stringstack.top() == '(') 
				stringstack.pop(); 

			// Repeating the popped string 'temo' count 
			// number of times. 
			for (int j = 0; j < count; j++) 
				result = result + temp; 

			// Push it in the character stack. 
			for (int j = 0; j < result.length(); j++) 
				stringstack.push(result[j]); 

			result = ""; 
		} 

		// If '(' opening bracket, push it into character stack. 
		else if (str[i] == '(') 
		{ 
			if (str[i-1] >= '0' && str[i-1] <= '9') 
				stringstack.push(str[i]); 

			else
			{ 
				stringstack.push(str[i]); 
				integerstack.push(1); 
			} 
		} 

		else
			stringstack.push(str[i]); 
	} 

	// Pop all the elmenet, make a string and return. 
	while (! stringstack.empty()) 
	{ 
		result = stringstack.top() + result; 
		stringstack.pop(); 
	} 

	return result; 
} 

int caseId = 1;


void solve(){
    string s; cin>>s;
    s = decode(s);
    long long int x = 1,y = 1;
    unordered_map<char,int> direction;
for(int i = 0; i < s.size(); i++){
    if(s[i]=='N'){
        direction['N']++;
    }
    if(s[i]=='S'){
        direction['S']++;
    }
    if(s[i]=='W'){
        direction['W']++;
    }
    if(s[i]=='E'){
        direction['E']++;
    }
}

long long effectiveX = direction['E'] - direction['W'];
    long long effectiveY = direction['S'] - direction['N'];

    if(effectiveX<0){
        x = pow(10,9) + x + effectiveX;
    } else{
        x = x + effectiveX;
    }
    if(effectiveY<0){
        y = pow(10,9) + y + effectiveY;
    } else{
        y = y + effectiveY;
    }

    direction.clear();


    cout<<"Case #"<<caseId++<<": "<<x<<" "<<y<<endl;



}

// Driven Program 
int main() 
{ 
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}




















/*#include <bits/stdc++.h>

using namespace std;

int caseId = 1;

void fun(string s, unordered_map<char,int> &direction, int i = 0, int repeat = 1){
    if(i==s.size()){
        return;
    }

    if(s[i]==')'){
        fun(s,direction,i+2,repeat);
    }
    
    if(s[i]>='2'&&s[i]<='9'){
        int r = s[i] - '0';
        fun(s,direction,i+2,repeat*r);
    }
    
    if(s[i]=='N'){
        direction['N']+=repeat;
        fun(s,direction,i++,repeat);
    }
    if(s[i]=='S'){
        direction['S']+=repeat;
        fun(s,direction,i++,repeat);
    }
    if(s[i]=='W'){
        direction['W']+=repeat;
        fun(s,direction,i++,repeat);
    }
    if(s[i]=='E'){
        direction['E']+=repeat;
        fun(s,direction,i++,repeat);
    }
        
            
    

}


void solve(){
    string s; cin>>s;
    long long x = 1, y = 1;
    unordered_map<char,int> direction;
    direction['N'] = 0;
    direction['S'] = 0;
    direction['W'] = 0;
    direction['E'] = 0;
    
    fun(s,direction);

    long long effectiveX = direction['E'] - direction['W'];
    long long effectiveY = direction['S'] - direction['N'];

    if(effectiveX<0){
        x = pow(10,9) + x + effectiveX;
    } else{
        x = x + effectiveX;
    }
    if(effectiveY<0){
        y = pow(10,9) + y + effectiveY;
    } else{
        y = y + effectiveY;
    }

    direction.clear();


    cout<<"Case #"<<caseId++<<": "<<x<<" "<<y<<endl;
}

int main(){
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
*/