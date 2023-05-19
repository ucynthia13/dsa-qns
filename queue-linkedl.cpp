#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		this->data = x;
		next = NULL;
	}
};

struct Queue{
	Node *head;
	Node *tail;
	int size;
	Queue(){
		head = NULL;
		tail = NULL;
		size = 0;
	}
	
	int getSize(){
		return size;
	}
	
	int count(){
//		,,,;
	}
	
	bool isEmpty(){
		return  size == 0;
	}
		
void enqueue(int val){
	Node *n = new Node(val);
	if(head == NULL){
		head = n;
		tail = n;
	}else{
		tail->next = n;
		tail = n;
	}
	size++;
}

void dequeue(){
	if(isEmpty()){
		return;
	}
	Node *temp = head;
	head = head->next;
	temp->next = NULL;
	//separate it from other nodes
	delete temp;
	size--;
}

int front(){
	if(isEmpty()){
		return 0;
	}
	return head->data;
}

void display(){
	Node *temp = head;
	while(temp != NULL){
	cout << temp->data << " ";
	temp = temp->next;
}
};



int main(){
	Queue q;
  	q.enqueue(12);
  	q.enqueue(13);
  	q.display();
  	cout << q.front() << endl;
  	q.dequeue();
  	cout << q.front() << endl;
  	cout << q.getSize() << endl;
  	cout << q.isEmpty() << endl;
  	q.enqueue(60);
  	q.dequeue(70);
  	cout << q.front() <<endl;
  	cout << q.getSize() << endl;
  	
  	while(!q.isEmpty()){
  		cout q.front();
  		q.dequeue();
	  }
	
	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
  	
  	return 0;
}

