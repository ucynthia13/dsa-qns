#include <iostream>
using namespace std;

template <typename T>
class Node {
	public:
	T data;
	Node *next;
	Node (T d){
		this->data=d;
		next = NULL;
	}
};
template <typename T>
class Stack{
	
	public:
	int size;
	Node<T> *head;
	Stack(){
		head = NULL;
	}
	void push(T data){
		Node<T> *newNode = new Node<T>(data);
		newNode->next = head;
		head = newNode;
		size++;
	}
	
	void pop(){
		Node<T> *temp;
		temp = head;
		head = temp->next;
		temp->next = NULL;
		delete temp;
		size--;	
	}
	
	bool isEmpty(){
		return head == NULL;
	}
	
	int getSize(){
		return size;
	}
	
	T top(){
		if(isEmpty()){
			cout << "stack is empty" << endl;
		}
		return head->data;
	}
	
	void display(){
		while(head->next != NULL){
			cout << head->data << endl;
			head = head->next;
			
		}
		cout << head->data;
	}
};


int main(){
	Stack<int> s;
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);
	s.push(14);
	s.push(15);
	cout << "Size: " << s.getSize() << endl;
	cout << "Top: " << s.top() << endl;
	s.pop();
	s.pop();
	s.pop();
	cout << "Current size: " << s.getSize() << endl;
	cout << "Current top: " << s.top() << endl;
	s.display();
	
	Stack<char> cs;
	cs.push('a');
	cs.push('b');
	cs.push('c');
	cs.push(97);
	cs.push(100);
	cout << "\nSize: " << cs.getSize() << endl;
	cout << "Top: " << cs.top() << endl;
	cs.pop();
	cs.pop();
	cs.pop();
	cout << "Current size: " << cs.getSize() << endl;
	cout << "Current top: " << cs.top() << endl;
	cs.display();
	
	return 0;
 }
