#include <iostream>
using namespace std;

class Node{
	public:
	Node(int d){
		this->data = d;
		this->next = NULL;
	}
	int data;
	Node *next;
};

void display(Node *node){
	while(node != NULL){
		cout << node->data << endl;
		node = node->next;
	}
}

Node *userData(){
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data != -1){
		//creating LL
		Node *n = new Node(data);
		//1st node 
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			n->next = head; 
			//next of the element will be the address of the element 
			//that head was pointing to
			head = n;
			//head now is the address of the new node
		}
		cin >> data;
	}
	
	return head;
}


int main(){
	Node *head = userData();
	display(head);
	return 0;
}

