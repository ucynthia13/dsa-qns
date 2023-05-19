#include <iostream>
using namespace std;

struct Student {
	int age;
	string name;
	void display(){
		cout << age << endl;
		cout << name <<endl;
	}
	void reprint(Student s){
		cout << "Age: " << s.age << endl;
		cout << "Name: " << s.name << endl;
	}
};

int main(){
 	struct Student s;
 	cout << "Enter the name: " << endl;
 	getline(cin, s.name);
 	cout << "Enter the age: " << endl;
 	cin >> s.age;
 	s.reprint(s);
 	s.display();
 	return 0;
}
