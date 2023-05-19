#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Student {
	public : 
		string name;
		int rollNumber;
		int age;
		double marks;
//		Student *next;
		Student(aName, aRollNumber, anAge, aMarks){
			this.name = aName;
			this.rollNumber = aRollNumber;
			this.age = anAge;
			this.marks = aMarks;			
		}
};

class LinkedList{
	struct Node{
		Student data;
		Node *next;
	};
	Node *head;
	
	public: 
	//constructor
	LinkedList(){
		head = NULL;
	}
};

//add at head
void insertAtHead(Student *& head, struct student){
	Student *student = new Student(name, rollNumber, age, marks);
	student->next = head;
	head = student;
}

//print node
void displayNode(Student *student){
	while(student != NULL){
		cout << student->name << student->rollNumber << student->age << student->marks << endl;
		student = student->next;
	}
}

//Read 
void Read(ifstream &file){
	file >> " " >> name >> " " >> rollNumber >> " " >> age >> " " >> marks;
}

//read from file 
void LinkedList::ReadFromFile(){
	ifstream outputData;
	outputData.open("dsa2.txt");
	while(!outputData.eof()){
		Node *newNode = new Node();
		newNode->data.Read(outputData);
		newNode->next = NULL;
		
		if(head == NULL){
			head = newNode;
		}else{
			Node *temp = head;
			while(temp != NULL){
				temp = temp->next;			
			}
			temp->next = newNode;
		} 
	}
}

//read from file 
void LinkedList::AddToFile(){
	
}

void merge(vector<Student> &students, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<Student> leftArray(n1), rightArray(n2);

    for (i = 0; i < n1; i++) {
        leftArray[i] = students[left + i];
    }
    for (j = 0; j < n2; j++) {
        rightArray[j] = students[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i].marks <= rightArray[j].marks) {
            students[k] = leftArray[i];
            i++;
        } else {
            students[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        students[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        students[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<Student> &students, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(students, left, mid);
        mergeSort(students, mid + 1, right);

        merge(students, left, mid, right);
    }
}

int main() {
    vector<Student> students;
    Student *head;
    int n = 3;
    double totalMarks;

    cout << "Enter " << n << " students' data:" << endl;
    for (int i = 0; i < n; i++) {
        Student student;
        
        cout << "Enter the name: ";
        getline(cin, student.name);
        
        rolln:cout << "Enter roll number: ";
        cin >> student.rollNumber;
        if(student.rollNumber < 0){
        	cout << "Enter valid roll number!" << endl;
        	goto rolln;
		}
		
        ag:cout << "Enter age: ";
        cin >> student.age;
        if(student.age < 10 || student.age > 30){
        	cout << "Enter valid age!" << endl;
        	goto ag;
		}
        
        mrk:cout << "Enter marks: ";
        cin >> student.marks;
        if(student.marks < 0 || student.marks > 50){
        	cout << "Enter valid marks!" << endl;
        	goto mrk;
		}
        
        cin.ignore();
        totalMarks += student.marks;
//        students.push_back(student);
		insertAtHead(head, student);
    }

return 0;
}
