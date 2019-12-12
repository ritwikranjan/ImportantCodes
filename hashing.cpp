#include <bits/stdc++.h>

using namespace std;

template<typename t, typename t2> class node
{
public:
	t2 key;
	t value;
	node<t,t2>* next;
	node(t2 k,t v){
		key = k;
		value = v;
	}
	~node(){
		if(next!=NULL){
			delete next;
		}
	}
};

template<typename t, typename t2> class hashTable
{
	int cs;
	int ts;
	node<t,t2>** arr;
	int hashFn(string key){
		int L = key.size();
		int ans = 0, p = 1;
		for(int i = 0; i < L; i++){
			ans+=key[L-i-1]*p;
			p*=37;
			p%=ts;
			ans%=ts;
		}
		return (ans);
	}
	int hashFn(int key){
		return (key*key)%ts;
	}
	void rehash(){
		ts = ts*2+1;
		node<t,t2>** temp = arr;
		arr = new node<t,t2>* [ts];
		cs = 0;
		for(int i = 0; i < ts; i++){
			arr[i]=NULL;
		}
		for(int i = 0; i < ts/2; i++){
			node<t,t2>* present = temp[i];
			while(present!=NULL){
				insert(present->key,present->value);
				present = present->next;
			}
		}
		delete temp;
	}
public:
	hashTable(int ds = 7){
		cs = 0;
		ts = ds;
		arr = new node<t,t2>*[ts];
		for(int i = 0; i < ds; i++){
			arr[i] = NULL;
		}
	}
	void insert(t2 key,t value){
		t* check = search(key);
		if(check!=NULL){
			*check = value;
			return;
		}
		int i = hashFn(key);
		node<t,t2>* n = new node<t,t2>(key,value);
		n->next = arr[i];
		arr[i] = n;
		cs++;
		float fl = float(cs/ts);
		if(fl>0.7){
			rehash();
		}
	}
	void print(){
		for(int i = 0; i < ts; i++){
			node<t,t2>* temp = arr[i];
			cout<<"Bucket "<<i<<" = ";
			while(temp!=NULL){
				cout<<temp->key<<"-"<<temp->value<<"->";
				temp = temp->next;
			}
			cout<<endl;
		}
	}
	t* search(t2 key){
		int i = hashFn(key);
		node<t,t2>* temp = arr[i];
		while(temp!=NULL){
			if(temp->key==key){
				return &(temp->value);
			}
			temp = temp->next;
		}
		return NULL;
	}

	t& operator[](t2 key){
		t* temp = search(key);
		if(temp == NULL){
			t garbage;
			insert(key,garbage);
			t* find = search(key);
			return *find;
		}
		else{
			return *temp;
		}
	}
	void deleteNode(t2 key){
		int i = hashFn(key);
		node<t,t2>* temp = arr[i];
		node<t,t2>* prev = NULL;
		while(temp!=NULL){
			if(temp->key==key){
				if(temp->next==NULL){
					delete temp;
					if(prev==NULL){
						arr[i] = NULL;
					}
					else{
						prev->next = NULL;
					}
					return;
				}
				else{
					node<t,t2>* cur = temp->next;
					if(prev == NULL){
						arr[i] = NULL;
						insert(cur->key,cur->value);
					}
					else{
						prev->next = NULL;
						insert(cur->key,cur->value);
					}
					delete temp;
					return;
				}
			}
			prev = temp;
			temp = temp->next;
		}
		return;
	}
};

int main()
{
	int n;
	cin>>n;
	hashTable<int,int> h(2*n+1);
	vector<pair<int,int> > ans;
	for(int i = 0; i < n; i++){
		int temp;
		cin>>temp;
		h.insert(temp,i);
		if(h.search(-temp)!=NULL){
			cout<<1;
			ans.push_back(make_pair(i,temp));
		}
	}
	for(auto print:ans){
		cout<<print.first<<" found at this index"<<endl;
	}
}
