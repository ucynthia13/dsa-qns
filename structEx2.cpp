#include <iostream>
using namespace std;

struct Student{
	int id;
	char *stName;
	string school;
	string level;
	char group;
	void display(Student student){
		cout << "\n" << student.id << ", " << student.stName << ", " << student.school << ", " << student.level << ", " << student.group << endl ;
	}
};

int main(){
	struct Student s;
	cout << "Enter the id: ";
	cin >> s.id;
	cout << "Enter the names: ";
	cin >> s.stName;
	cin.ignore();
	cout << "Enter the school: ";
	getline(cin, s.school);
	cout << "Enter the level: ";
	getline(cin, s.level);
	cout << "Enter the group: ";
	cin >> s.group;
	s.display(s);
	return 0;
}
