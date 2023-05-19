#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

void display(Node *node){
	while(node != NULL){
		cout << node->data << endl;
		node = node->next;
	}
}

int main(){
	Node *first = new Node();
	Node *second = new Node();
	Node *third = new Node();
	
	first->data = 10;
	first->next = second;
	second->data = 12;
	second->next = third;
	third->data = 20;
	third->next = NULL;
	display(second);
	
	return 0;
}


//	//static initialisation
//	Node n1 = Node(5);
//	Node n2 = Node(10);
//	n1.next = &n2;
//	
//	//dynamic initialisation
//	Node *n3 = new Node(15);
//	n2.next = n3;
//	Node *n4 = new Node(20);
//	
//	Node *head = &n1;
//	
//	display(head);
//	
//	cout << "\nNodes: " << count << endl;
//	
//	return 0;
