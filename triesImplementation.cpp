#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    char data;
    int count;
    unordered_map <char,node*> ptr;
    bool terminal;
    node(char d){
        data = d;
        terminal = false;
        count = 1;
    }
};

class Trie{
    node* root;
    public:
    Trie(){
        root = new node('/0');
    }
    void insert(string s){
        node*temp = root;
        for(int i = 0; i < s.size(); i++){
            if(temp->ptr.find(s[i])!=temp->ptr.end()){
                temp = temp->ptr[s[i]];
                temp->count++;
            }else{
                node* build = new node(s[i]);
                temp->ptr[s[i]] = build;
                temp = build;
            }
        }
        temp->terminal = true;
    }
    bool find(string s){
        node*temp = root;
        for(int i = 0; i < s.size(); i++){
            if(temp->ptr.find(s[i])!=temp->ptr.end()){
                temp = temp->ptr[s[i]];
            }else{
                return false;
            }
        }
        return temp->terminal;
    }

    string prefix(string s){
        node*temp = root;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            temp = temp->ptr[s[i]];
            if(temp->count==1){
                return ans + s[i];
            } else{
                ans+=s[i];
            }
        }
        return "-1";
    }
};

int main(){
    
    Trie *t = new Trie();

    t->insert("new");
    t->insert("not");
    t->insert("no");
    t->insert("never");
    t->insert("apple");

    for (int i = 0; i < 5; i++)
    {
        string s;
        cin>>s;
        cout<<t->prefix(s);
    }
    

}