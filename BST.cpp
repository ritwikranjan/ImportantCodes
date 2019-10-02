#include <bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node * left;
    node * right;

    node(int d){
        data = d;
        right = NULL;
        left = NULL;
    }
};

node* insert(node*root, int d){
    if(root == NULL){
        root = new node(d);
        return root;
    }
    if(d>=root->data){
        root->right = insert(root->right,d);
    }
    else{
        root->left = insert(root->left,d);
    }
}

bool searchTree(node*root, int key)
{
	if(root==NULL){
		return false;
	}
	if(root->data==key){
		return true;
	}
	else if(root->data<key){
		return searchTree(root->right,key);
	}
	else{
		return searchTree(root->left,key);
	}
}

node* build()
{
    int d;
    cin>>d;

    node*root = NULL;

    while(d!=-1){
        root = insert(root,d);
        cin>>d;
    }
    return root;
}

void printBSF(node*root)
{
	queue <node*> temp;
	temp.push(root);
	temp.push(NULL);
	while(!temp.empty()){
		node* print = temp.front();
		cout<<print->data<<" ";
		temp.pop();
		if(print->left!=NULL)
			temp.push(print->left);
		if(print->right!=NULL)
			temp.push(print->right);
		if(temp.front()==NULL){
			cout<<endl;
			temp.pop();
			if(!temp.empty())
				temp.push(NULL);
		}
	}
}


int main(){
    node*root = build();
    printBSF(root);
    int key;
    cin>>key;
    cout<<searchTree(root,key);
    return 0;
}
