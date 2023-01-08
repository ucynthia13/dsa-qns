#include <iostream>
using namespace std;
class Student{
	public: 
	string name;
	string major;
	int gpa;
	//constructor 
	Student(string aName, string aMajor, int aGpa){
		name = aName;
		major = aMajor;
		gpa = aGpa;
	}
	bool hasHonors(){
		if(gpa>=3.0){
			return true;
		}
		return false;
	}
};

int main(){
	Student student1("Tim", "Business", 3.4);
	Student student2("Pam", "Art", 3.2);
	cout << student1.hasHonors();
}
