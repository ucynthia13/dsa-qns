#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Student{
	
	string stName;
	int stAge;
	int rollNumber;
	double marks;
	
	double avgMarks(double total, int n){
		return total / n;
	}
	
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
		ifstream outputData("dsa.txt");
		string stName;
		int stAge;
		int rollNumber;
		double marks;
		double marksArr[] = {};
		struct Student students[10];
		
		if(outputData.fail()){
			cout << "failed to open the file" << endl;
			exit(1);
		}
		
		int i, count=0;
		
		while(!outputData.eof()){
			outputData >> stName >> stAge >> rollNumber >> marks;
			students[i].stName = stName;
			students[i].stAge = stAge;
			students[i].rollNumber = rollNumber;
			students[i].marks = marks;
			marksArr[i] = marks;
			i++;
			count++;
		}
		
		int k =0;
		for(k=0; k<i; k++){
			cout << "Name: " << students[k].stName << endl;
		}
		
		double res = 0;
		
		for(int j=0; j < i ; j++){
			res += students[j].marks;
		}
		
		cout << "Number of students: "<< count << endl;
		cout << "Average student marks: " << avgMarks(res, count) << endl;
		
		outputData.close();
	}
	
	
	
};

int main(){
	struct Student s;
//	rollNumber:cout << "Enter the rollnumber: ";
//	cin >> s.rollNumber;
//	cin.ignore();
//	if(s.rollNumber < 0){
//		cout << "Enter a valid rollnumber!" << endl;
//		goto rollNumber;
//	}
//	cout << "Enter the names: ";
//	getline(cin, s.stName);
//	age:cout << "Enter the age: ";
//	cin >> s.stAge;
//	if(s.stAge < 10 || s.stAge > 30){
//		cout << "Enter valid age!" << endl;
//		goto age;
//	}
//	marks:cout << "Enter the marks: ";
//	cin >> s.marks;
//	if(s.marks < 0 || s.marks > 50){
//		cout << "Enter valid marks!" << endl;
//		goto marks;
//	}
//	cout << endl;
//	cout << "Saved data...";
//	cout << endl;
//	s.display(s);
//	cout << endl;
//	cout << "Saving data successful...";
//	cout << endl;
//	s.save();
	cout << endl;
	cout << "Saved data...";
	cout << "\n________________";
	cout << endl;

	s.output();
	return 0;
}
