#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
	public:
    int rollNumber;
    string name;
    int age;
    float marks;
    Student *next;
};

void addStudent(Student *&head, int rollNumber, string name, int age, float marks){
	Student *student = new Student;
	student->rollNumber = rollNumber;
	student->name = name;
	student->age = age;
	student->marks = marks;
	student->next = head;
	head = student;
}

void printStudents(Student *head){
	float totalMark = 0;
	float averageMark = 0;
	int stCount = 0;
	Student *temp = head;
	while(temp != NULL){
		cout << "RollNumber: "<< temp->rollNumber << "\n" 
		<< "Name: " << temp->name << "\n" 
		<< "Age: " << temp->age << "\n" 
		<< "Marks: " << temp->marks << "\n"
		<< "________________________________\n";
		
		totalMark+=temp->marks;
		stCount++;
		temp = temp->next;
	}
	averageMark = totalMark/stCount;
	cout << "Students Average Marks: " << averageMark << endl;
}

void inputData(Student *&head) {
	ofstream inputFile("info.txt");
	while (head != NULL) {
	inputFile << head->rollNumber << " " << head->name << " " << head->age << " " << head->marks << endl;
	head = head->next;
	}
	inputFile.close();
}

void outputData(Student *&head){
	ifstream outputFile("info.txt");
	int rollNumber;
	string name;
	int age;
	float marks;
	
	Student *temp = NULL;
	while(outputFile >> rollNumber >> name >> age >>  marks){
		addStudent(temp, rollNumber, name, age, marks);
	}
	outputFile.close();

	printStudents(temp); //
}

//////

int main(){
	Student *headNode = NULL;
	int stRollNumber;
	string stName;
	int stAge;
	float stMarks;
	int i;
	int nStudents = 5;
	
	for(i=0; i<nStudents; i++){
		cout <<"\nEnter Student " << i+1 << " Number Information: " << endl;
		rollN:cout << "RollNumber: ";
		cin >> stRollNumber;
		//validation
		if(stRollNumber<0){
			cout << "Enter a valid rollNumber!" << endl;
			goto rollN;
		}
		cin.ignore();
		
		cout << "Name: ";
		getline(cin, stName);
		
		ag:cout << "Age: ";
		cin >> stAge;
		//validation
		if(stAge < 10 || stAge > 30){
			cout << "Enter valid age!" << endl;
			goto ag;
		}
		
		mrk:cout << "Marks: ";
		cin >> stMarks;
		//validation
		if(stMarks < 0 || stMarks > 50){
			cout << "Enter valid marks!" << endl;
			goto mrk;
		}
		
		addStudent(headNode, stRollNumber, stName, stAge, stMarks);
	}
		cout << "\nSaving data...";
		inputData(headNode);
		
		cout << "\nReading data...\n\n";
		outputData(headNode);
		
		return 0;
}

