#include <iostream>
using namespace std;

int main(){
	string firstName;
	string lastName;
	int age;
	
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your second name: ";
	cin.ignore();
	getline (cin , lastName);
	cout << "Enter your age";
	cin >> age;
	
	cout << "My names are " << firstName << " " << lastName << ", I'm " << age;
	
	return 0;
}
