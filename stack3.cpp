#include <iostream>
using namespace std;

template<typename T>
class Stack{
    T *arr;
    int nextIndex;
    int capacity;
    public:
    Stack(){
        capacity =5;
        arr = new T[capacity];
        nextIndex = 0;
    }
    Stack(int cap){
        capacity = cap;
        arr = new T[capacity];
        nextIndex = 0;
    }
    void push(int element){
        if(nextIndex == capacity){
           T *newArr = new T[capacity*2];
           for(int i = 0;i<capacity;i++){
               newArr[i] = arr[i];
           }
           delete []arr;
           arr = newArr;
           capacity = capacity*2;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }
    
    int size(){
        return nextIndex;
    }
    
    bool isEmpty(){
        return nextIndex == 0;
    }
    
    T top(){
        if(isEmpty()){
            cout<< "underflow" << endl;
            return 0;
        }
        return arr[nextIndex-1];
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty!" << endl;
            return;
        }
        nextIndex--;
    }
};
int main() {
    // Write C++ code here
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    cout<<s.size()<<endl;
    cout<<"Top is: "<<s.top()<<endl;
     s.pop();
     s.pop();
     s.pop();
     cout<<"Top now is: " << s.top()<<endl;
     
    Stack<double> ds(3);
    ds.push(11.123);
    ds.push(13.45);
    ds.push(120.0);
	ds.push(100.40);
	ds.push(12.82);
	ds.push(98.43);
	cout << "\n" << ds.size() << endl;
	cout << "Top is: " << ds.top() << endl;
     ds.pop();
     ds.pop();
     ds.pop();
    cout << "Top now is: " << ds.top() << endl;
	
	Stack<char> cs;
	cs.push('a');
	cs.push('p');
	cs.push(97);
	cs.push(100);
	cs.pop();
	cout<< "\n" << cs.size()<<endl;
	cout<< "Top is: "<< cs.top()<<endl;
	
return 0;
}
