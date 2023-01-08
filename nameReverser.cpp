#include <iostream>
using namespace std;

int main(){
	string fname, lname, temp;
	
	cout << "Enter your firstname" << endl;
	getline(cin, fname);
	cout << "Enter your lastname: " << endl;
	getline(cin, lname);
	
	temp = fname; //fname is empty
	fname = lname; //lname is empty
	lname = temp; // temp is empty
		
	cout << "Name in reverse is:" << fname << " " << lname << endl;
	
	return 0;
	
}
