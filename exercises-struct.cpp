#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Student {
	string name;
    int rollNumber;
    int age;
    double marks;
};

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
        students.push_back(student);
    }

    ofstream inputData("dsa.txt");
    for (int i = 0; i < n; i++) {
        inputData << students[i].name << " " << students[i].rollNumber << " " << students[i].age << " " << students[i].marks << endl;
    }
    inputData.close();
	
	cout << "\n";
    cout << "Saved data ..." << endl;
	cout << "\n";
    cout << "Reading data ..." << endl;

    ifstream outputData("dsa.txt");
    
    string name;
    int rollNumber;
    int age;
   	double marks;
   	int i=0;
	int count=0;
    	
    if(outputData.fail()){
		cout << "failed to open the file" << endl;
		exit(1);
	}
	
    while (!outputData.eof() && i<n) {
		outputData >> name >> rollNumber >> age >> marks;
		students[i].name = name;
		students[i].rollNumber = rollNumber;
		students[i].age = age;
		students[i].marks = marks;
		
    	cout << "Names: " << name << "\t" << "Roll Number: "<< rollNumber << "\t" << "Age: " << age << "\t" << "Marks: " << marks << endl;
        i++;
        count++;
    }
    
	outputData.close();
	
    cout << "Sorting students by marks: " << endl;

    mergeSort(students, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << "Names: " << students[i].name << "\t" << "Roll Number: " << students[i].rollNumber << "\t" << "Age: " << students[i].age << "\t" << "Marks: " << students[i].marks << endl;
    }
    
	cout << "\nTotal number of students: " << count << endl;
    cout << "Average marks: " << (double)totalMarks / n << endl;

    return 0;
}
