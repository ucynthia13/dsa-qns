#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
int rollNumber;
string name;
int age;
float marks;
Student* next;
};

void addStudent(Student*& head, int rollNumber, string name, int age, float marks) {
Student* newStudent = new Student;
newStudent->rollNumber = rollNumber;
newStudent->name = name;
newStudent->age = age;
newStudent->marks = marks;
newStudent->next = head;
head = newStudent;
}

void displayList(Student* head) {
float totalMarks = 0;
int count = 0;
while (head != NULL) {
cout << "Roll Number: " << head->rollNumber << endl;
cout << "Name: " << head->name << endl;
cout << "Age: " << head->age << endl;
cout << "Marks: " << head->marks << endl;
totalMarks += head->marks;
count++;
head = head->next;
}
float averageMarks = totalMarks / count;
cout << "Average Marks: " << averageMarks << endl;
}

void saveList(Student* head) {
ofstream outFile("students.txt");
while (head != NULL) {
outFile << head->rollNumber << " " << head->name << " " << head->age << " " << head->marks << endl;
head = head->next;
}
outFile.close();
}

void loadList(Student*& head) {
ifstream inFile("students.txt");
int rollNumber, age;
string name;
float marks;
while (inFile >> rollNumber >> name >> age >> marks) {
cout << rollNumber << name << age << marks << endl;
addStudent(head, rollNumber, name, age, marks);
}
inFile.close();
}

int main() {
Student* head = NULL;
int rollNumber, age;
string name;
float marks;
for (int i = 0; i < 2; i++) {
cout << "Enter student " << i + 1 << " details:" << endl;
cout << "Roll Number: ";
cin >> rollNumber;
cout << "Name: ";
cin >> name;
cout << "Age: ";
cin >> age;
cout << "Marks: ";
cin >> marks;
addStudent(head, rollNumber, name, age, marks);
}
saveList(head);
loadList(head);
displayList(head);
return 0;
}
