#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	Node(int d){
		this->data = d;
		this->next = NULL;
	}
};

void displayNodes(Node *head){
    Node *temp = head;
  
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


void insertAfterGivenNode(Node *head, int el, int data){
	Node *node = new Node(data);
	if(el == head->data){
		node->next = head->next;
		head->next = node;
		return;
	}
	
	Node *temp = head;
	while(!temp->data != el){
		temp = temp->next;
		if(temp->next == NULL){
			cout << "Element not found" << endl;
			return;
		}
		node->next = temp->next;
		temp->next = node;
	}
}
//3
//element 3 will point to the element 
//that 6 was pointing to
//and 6 will now point to our new element, 3
// 2,4,6,3,7

Node *createNode(int data){
	Node *node = new Node(data);
	node->next = NULL;
	return node;
}

int size = 0;

void insertAtGivenPos(Node *&head, int position, int data){
	Node *temp = createNode(data);
	if(position < 1 || position > size+ 1){
		cout << "Invalid position." << endl;
	}else if(position == 1){
		temp->next = head;
		head = temp;
		size++;
	}else {
		Node *temp2 = head;
		while(--position > 1 ){
			//Update head as the next node
			//if position is not decremented yet to 1
			//3
			//1,`2,4,3,5
			temp2 = temp2->next;
		}
		temp->next = temp2->next;
		temp2->next = temp;
		size++;
	}
}

void deleteAtGivenPosition(Node *&head, int position){
	Node *temp = head;
	//position validity
	if(position < 1 || position > size+1){
		cout << "Invalid position.";
	}else if(position == 1){
		//update head
		head = head->next;
		temp->next = NULL;
		delete temp;
		size--;
	}else {
		while(position > 2){
			temp = temp->next;
			position--;
		}
		//1,2,3,4,5,6,7
		Node *nextNode = temp->next->next;
		delete temp->next;
		//update previous node (2) to nextNode after deleted node (5)
		temp->next = nextNode;
		size--;
	}
}

int main(){
	size = 5;
	Node *n1 = new Node(12);
	Node *head = n1;
	Node *n2 = new Node(14);
	n1->next = n2;
	Node *n3 = new Node(16);
	n2->next = n3;
	Node *n4 = new Node(18);
	n3->next = n4;
	Node *n5 = new Node(20);
	n4->next = n5;

	insertAtGivenPos(head, 1, 22);
	displayNodes(head);
	deleteAtGivenPosition(head,1);
	displayNodes(head);
	
	return 0;
}
