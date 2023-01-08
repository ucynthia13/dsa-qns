#include <iostream>
using namespace std;

int main(){
	double marks;
	string pass;
	int passingMark = 10;
	int gradingMark1 = 16;
	int gradingMark2 = 14;
	int gradingMark3 = 10;
	char grade;
	
	cout << "Enter your marks out of twenty: ";
	cin >> marks;
	
	pass = (marks > passingMark) ? "You passed" : "You failed"  ;
	grade = (marks >= gradingMark1) ? 'A' : (marks >= gradingMark2 ) ? 'B' : (marks >= gradingMark3) ? 'C' : 'D';
	cout<< pass << " with grade " <<grade; 
	
	
	 return 0;
}
