#include <iostream>
using namespace std;

class Stack{
	int *arr;
	int nextIndex;
	int capacity;
	public:
		Stack(int cap){
			capacity = cap;
			arr = new int[capacity];
			nextIndex = 0;
		}
		bool isEmpty(){
			return nextIndex == 0;
		}
		void push(int element){
			if(nextIndex == capacity){
				cout << "stack overflow" << endl;
				return;
			}
			arr[nextIndex]=element;
			nextIndex++;
		}
		void pop(){
			if(isEmpty()){
				cout << "stack underflow" << endl;
				return;
			}
			cout << top() << endl;
			nextIndex--;
			cout << top() << endl;
		}
		int size(){
			return nextIndex;
		}
		int top(){
			if(isEmpty()){
				return 0;
			}
			return arr[nextIndex-1];
		}
};

int main(){
	Stack *s = new Stack(5);
	s->push(10);
	s->push(20);
	s->push(30);
	s->push(40);
	cout << s->size()<< endl;
	cout << "Top " << s->top() << endl;
	s->pop();
	s->pop();
	return 0;
}
