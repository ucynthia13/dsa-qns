#include <iostream>
#include <fstream>
using namespace std;

struct Student{
	
	int arr[] = {};
	
	string stName;
	int stAge;
	int rollNumber;
	double marks;
	
	void display(Student student){
		cout << student.rollNumber << ", " << student.stName << ", " << student.stAge << ", " << student.marks << endl;
	}
	
	void save(){
		ofstream inputData;
		inputData.open("dsa.txt", ofstream::app);
		inputData << stName << "\n" << stAge << "\n" << rollNumber << "\n" << marks << "\n" << "_______________________" << endl;
		inputData.close();
	}
	
	void output(){
		ifstream outputData;
    	outputData.open("dsa.txt");
    	string data;
    	while (getline(outputData, data)){
        cout << data << endl;
    	}
    	outputData.close();
	}

	
};

int main(){
	struct Student s;
	rollNumber:cout << "Enter the rollnumber: ";
	cin >> s.rollNumber;
	cin.ignore();
	if(s.rollNumber < 0){
		cout << "Enter a valid rollnumber!" << endl;
		goto rollNumber;
	}
	cout << "Enter the names: ";
	getline(cin, s.stName);
	age:cout << "Enter the age: ";
	cin >> s.stAge;
	if(s.stAge < 10 || s.stAge > 30){
		cout << "Enter valid age!" << endl;
		goto age;
	}
	marks:cout << "Enter the marks: ";
	cin >> s.marks;
	if(s.marks < 0 || s.marks > 50){
		cout << "Enter valid marks!" << endl;
		goto marks;
	}
	cout << endl;
	cout << "Saved data...";
	cout << endl;
	s.display(s);
	cout << endl;
	cout << "Saving data successful...";
	cout << endl;
	s.save();
	cout << endl;
	cout << "Saved data...";
	cout << "\n________________";
	cout << endl;
	s.output();
	return 0;
}
