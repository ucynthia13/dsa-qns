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

Node *deleteNode(Node *head, int i){
	if(i <= 0){
		return head;
	}
	if(i==1 && head){
		//store the address of the next node
		Node *newHead = head->next;
		//isolate the current node
		head->next = NULL;
		//delete the current head node 
		delete head;
		//start the LL with the new Head 
		return newHead;
	}
	
	//keep head in a temp curr variable
	Node *curr = head;
	int count = 1;
	//before the target, if the current pointer is valid 
	//change the current to the next of the current
	while(count< i-1 && curr!=NULL){
		curr = curr->next;
		count++;
	}
	if(curr && curr->next){
		//keep the address of element to delete
		Node *temp = curr->next;
		//change the next of current to the temp current
		curr->next = curr->next->next;
		//deallocate the temp memory
		temp->next = NULL;
		//delete the temp
		delete temp;
		//return the head
		return head;
	}
	return head;
}

void displayNodes(Node *head){
    Node *temp = head;
  
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main(){
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
	deleteNode(head,2);
	displayNodes(head);
	return 0;
}
