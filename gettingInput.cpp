	#include <iostream>

using namespace std;

int main(){
	int age;
	string name;
	cout << "Enter your name: "<< endl;
	getline(cin, name);
	cout << "Enter your age: "<< endl;
	cin >> age;
	cout << "Hello " << name << "!\nYou're " << age << endl;
}
