#include<bits/stdc++.h>
using namespace std;

string extractString(string s, int key){
    char* ret = strtok((char*)s.c_str()," ");
    while (key>1)
    {
        ret = strtok(NULL," ");
        key--;
    }
    return ret;
}

bool numericComp(pair<string,string> s1,pair<string,string> s2){
    int val1 = stoi(s1.second);
    int val2 = stoi(s2.second);
    return val1<val2;
}
bool numericCompRev(pair<string,string> s1,pair<string,string> s2){
    int val1 = stoi(s1.second);
    int val2 = stoi(s2.second);
    return val1>val2;
}
bool lexi(pair<string,string> s1,pair<string,string> s2){
    return s1.second<s2.second;
}
bool lexiRev(pair<string,string> s1,pair<string,string> s2){
    return s1.second>s2.second;
}

int main() {
    int n;
    cin>>n;
    cin.get();
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin,s);
        str.push_back(s);
    }
    int key;
    string reverseCase, sortCase;
    cin>>key>>reverseCase>>sortCase;
    vector<pair<string,string>> finalString;
    for (int i = 0; i < n; i++)
    {
        pair<string,string> temp;
        temp.first = str[i];
        temp.second = extractString(str[i],key);
        finalString.push_back(temp);
    }
    
    if(reverseCase=="false"){
        if(sortCase=="numeric"){
            sort(finalString.begin(),finalString.end(),numericComp);
        } else {
            sort(finalString.begin(),finalString.end(),lexi);
        }
    } else{
        if(sortCase=="numeric"){
            sort(finalString.begin(),finalString.end(),numericCompRev);
        } else {
            sort(finalString.begin(),finalString.end(),lexiRev);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<finalString[i].first<<endl;
    }
    
    


    return 0;
}