#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
	int data;
	node* right;
	node* left;

	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

class pairs
{
public:
	int height;
	int diameter;
};

node* buildTree()
{
	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}

	node*root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void print(node*root)
{
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}
void printpost(node*root)
{
	if(root == NULL){
		return;
	}
	printpost(root->left);
	printpost(root->right);
	cout<<root->data<<" ";
}
void printin(node*root)
{
	if(root == NULL){
		return;
	}
	printin(root->left);
	cout<<root->data<<" ";
	printin(root->right);
}
int height(node*root)
{
	if(root == NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	int h = (max(h1,h2))+1;
	return h;
}
void kthlevel(node*root,int k)
{
	if(root == NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	kthlevel(root->left,k-1);
	kthlevel(root->right,k-1);
	return;
}

void printlevelorder(node*root)
{
	queue <node*> temp;
	temp.push(root);
	while(!temp.empty()){
		node* print = temp.front();
		cout<<print->data<<" ";
		temp.pop();
		if(print->left!=NULL)
			temp.push(print->left);
		if(print->right!=NULL)
			temp.push(print->right);
	}
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

void printAllLevel(node*root)
{
	for(int i = 1; i <= height(root); i++){
		kthlevel(root,i);
		cout<<endl;
	}
}

int diameter(node*root)
{
	if(root==NULL){
		return 0;
	}
	int d1 = height(root->left) + height(root->right);
	int d2 = diameter(root->left);
	int d3 = diameter(root->right);
	if(d1>d2){
		if(d1>d3){
			return d1;
		}
		else{
			return d3;
		}
	}
	else if(d2>d3){
		return d2;
	}
	else{
		return d3;
	}

}



int countNodes(node*root)
{
	if (root == NULL){
		return 0;
	}
	int a = countNodes(root->left);
	int b = countNodes(root->right);

	return a + b +1;
}



int sumNodes(node*root)
{
	if (root == NULL){
		return 0;
	}
	int a = sumNodes(root->left);
	int b = sumNodes(root->right);

	return a + b + root->data;
}

pairs fastDiameter(node*root)
{
	pairs p;
	if(root==NULL){
		p.height = 0;
		p.diameter = 0;
		return p;
	}
	pairs left = fastDiameter(root->left);
	pairs right = fastDiameter(root->right);
	p.height = max(left.height , right.height) + 1;
	p.diameter = max(left.height + right.height, max(left.diameter,right.diameter) );
	return p;
}

int replaceSum(node*root)
{
	if(root == NULL){
		return 0;
	}
	if(root->left == NULL && root->right == NULL){
		return root->data;
	}
	int leftSum = replaceSum(root->left);
	int rightSum = replaceSum(root->right);

	int temp = root->data;
	root->data = rightSum + leftSum;
	return temp + root->data;
}

class HBPair
{
public:
	int height;
	bool balance;
};

HBPair isTreeBalanced(node*root)
{
	HBPair p;
	if(root == NULL){
		p.height = 0;
		p.balance = true;
		return p;
	}
	HBPair left = isTreeBalanced(root->left);
	HBPair right = isTreeBalanced(root->right);

	p.height = max(left.height,right.height) + 1;
	if(left.height-right.height>1||left.height-right.height<-1){
		p.balance = false;
		return p;
	}
	else{
		p.balance = true;
	}
	return p;
}

node* buildTreeFromArray(int *arr, int s, int e)
{
	if(s>e){
		return NULL;
	}
	int mid = (s+e)/2;
	node* root = new node(arr[mid]);
	root->left = buildTreeFromArray(arr, s, mid-1);
	root->right = buildTreeFromArray(arr, mid+1, e);
	return root;
}

node* buildTreeFromPreIn(int *pre, int *in, int s, int e)
{
    static int i = 0;
	if(s>e){
		return NULL;
	}
	node* root = new node(pre[i]);
    int index = -1;
    for(int j = s; j <= e; j++){
        if(in[j]==pre[i]){
            index = j;
            break;
        }
    }
    i++;
	root->left = buildTreeFromPreIn(pre, in, s, index-1);
	root->right = buildTreeFromPreIn(pre, in, index+1, e);
	return root;
}

int main()
{
	//node*root = buildTree();
	//int a[]={1,2,3,4,5,6,7};
    int a[10] = {1,2,3,4,8,5,6,7},b[10] = {3,2,8,4,1,6,7,5};
	node*root = buildTreeFromPreIn(a,b,0,7);
	printBSF(root);
/*	print(root);
	cout<<endl;
	printin(root);
	cout<<endl;
	printpost(root);
	cout<<endl;
	printAllLevel(root);
	printBSF(root);
	cout<<countNodes(root)<<endl<<sumNodes(root)<<endl;
	cout<<height(root)<<endl;
	cout<<diameter(root)<<endl;
	pairs p = fastDiameter(root);
	cout<<p.height<<endl<<p.diameter<<endl;
	int ab = replaceSum(root);
	printBSF(root);
	HBPair x = isTreeBalanced(root);
	cout<<x.balance<<endl;*/
	return 0;
}
