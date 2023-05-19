#include <iostream>
#include <Stack>
using namespace std;

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
	
	return 0;
}
