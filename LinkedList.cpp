#include <iostream>

using namespace std;

class node
{
public:
	int data;
	node * next;
	node(int n)
	{
		data = n;
		next = NULL;
	}
};

void deleteAtHead(node*&head)
{
	node*temp = head;
	head = head->next;
	delete temp;
}

void deleteAtEnd(node*&head)
{
	node*temp = head;
	node*prev = NULL;
	while(temp->next!=NULL){
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	delete temp;
}

void InsertAtHead(node*&head, int data)
{
	node*n = new node(data);
	n->next = head;
	head = n;
}

int len(node*head)
{
	int len = 1;
	while(head->next!=NULL){
		head = head->next;
		len++;
	}
	return len;
}

void deleteAtMiddle(node*&head,int p)
{
	node*prev = NULL;
	node*temp = head;
	if(p==1){
		deleteAtHead(head);
	}
	else if(p == len(head)){
		deleteAtEnd(head);
	}
	else{
		for(int i = 1; i < p; i++){
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		delete temp;
	}
}

void InsertAtTail(node*&head, int data)
{
	node * temp = head;
	if(temp == NULL){
		InsertAtHead(head,data);
	}
	else{
	while(temp->next!=NULL){
		temp = temp->next;
	}
	node*n = new node(data);
	temp->next = n;
	}
}

void InsertAtMiddle(node*&head, int data, int p)
{
	if(head==NULL||p==0){
		InsertAtHead(head,data);
	}
	else if(p > len(head)){
		InsertAtTail(head,data);
	}
	else{
		node*temp = head;
		node*n = new node(data);
		for(int i = 1; i < p; i++){
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;

	}
}

void buildList(node*&head)
{
	int data;
	cin>>data;
	while(data!=-1){
		InsertAtTail(head,data);
		cin>>data;
	}
}


istream& operator>>(istream &in, node*&head)
{
	buildList(head);
	return in;
}



void print(node*head)
{
	while(head!=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}
}
ostream& operator<<(ostream &out, node*&head)
{
	print(head);
	return out;
}

void reverseList(node*&head)
{
	node*prev = NULL;
	node*current = head;
	node*temp = current->next;
	while(1){
		current->next = prev;
		prev = current;
		current = temp;
		temp = current->next;
		if(temp==NULL){
			current->next = prev;
			break;
		}
	}
	head = current;
}

node* recRevList(node*&head)
{
	if(head->next==NULL||head==NULL){
		return head;
	}
	node*Shead = recRevList(head->next);
	node*current = head;
	current->next->next = current;
	current->next = NULL;
	return Shead;
}

node* midpoint(node*head)
{
	node* fast = head;
	node* slow = head;
	while(fast->next!=NULL){
		fast = fast->next->next;
		if(fast==NULL){
			break;
		}
		slow = slow->next;
	}
	return slow;
}

void kFromEnd(node*head,int k)
{
	node*fast = head;
	node*slow = head;
	for(int i = 0; i < k; i++){
		fast = fast->next;
	}
	while(fast!=NULL){
		fast = fast->next;
		slow = slow->next;
	}
	cout<<slow->data;
}

node* mergeList(node*&head1,node*&head2)
{
	node*head = NULL;
	if(head1->data>=head2->data){
		head = head2;
		head2 = head2->next;
	}
	else{
		head = head1;
		head1 = head1->next;
	}
	node*current = head;
	while(true){
		if(head1==NULL||head2==NULL){
			break;
		}
		if(head1->data>=head2->data){
			current->next = head2;
			head2 = head2->next;
			current = current->next;
		}
		else{
			current->next = head1;
			head1 = head1->next;
			current = current->next;
		}
	}
	if(head1 == NULL){
		current->next = head2;
	}
	else if(head2 == NULL){
		current->next = head1;
	}
	return head;
}

node* mergeSort(node*head)
{
	if(head==NULL||head->next==NULL){
		return head;
	}
	node*mid = midpoint(head);
	node*a = head;
	node*b = mid->next;
	mid->next = NULL;
	a = mergeSort(a);
	b = mergeSort(b);
	node*c = mergeList(a,b);
	return c;

}

class stack{
public:
	node * head;
	stack(){
		head = NULL;
	}
	void push(int d){
		InsertAtHead(head,d);
	}
	void pop(){
		deleteAtHead(head);
	}
	int top(){
		return head->data;
	}
};

int main()
{
	stack s;
	s.push(10);
	s.push(20);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top();
	return 0;
}
