#include <iostream> 
using namespace std;

int main(){
	int age = 10;
	int *pAge = &age;
	//pointer variable storing the address of the variable age (another datatype)
	//we use the datatype of the variable to which the pointer is pointing to
	//forinstance pointer pAge is storing the address of the int variable;
	double marks = 20.45;
	string name = "User";
	
	cout << "age: " << &age << endl;
	cout << "marks: "<< &marks << endl;
	cout << "name: "<< &name << endl;
	cout << &pAge << endl;
	return 0;
}
