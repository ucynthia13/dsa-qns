#include <iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		int age;
		Student *next;
		
		Student(int roll, string n, int a){
			this->id = roll;
			this->name = n;
			this->age = a;
			next = NULL;
		}
};

int count = 1;
void display(Student *student){
	while(student->next != NULL){
		cout << student->id << "\t" << student->name << "\t" << student->age << "\t" << endl;
		student = student->next;
		count++;
	}
	cout << student->id << "\t" << student->name << "\t" << student->age << "\t" << endl;
}

int main(){
	Student *student1 = new Student(1, "Maria", 15);
	Student *student2 = new Student(2, "John", 17);
	student1->next = student2;
	Student *student3 = new Student(3, "Ange", 16);
	student2->next = student3;
	Student *student4 = new Student(4, "Muhire", 14);
	student3->next = student4;
	Student *student5 = new Student(5, "Peter", 20);
	student4->next = student5;
	Student *head = student1;
	display(head);
	cout << "Number of students: " << count << endl;
	return 0;
}
