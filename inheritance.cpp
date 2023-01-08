//inheritance - creation of classes that extend or inherit the functionality of the extended class 

#include <iostream>
using namespace std;

class Chef{
	public: 
	
	void makesChicken(){
		cout << "The chef makes chicken" << endl;
	}
	void makesRibs(){
		cout << "The chef makes bbq ribs" << endl;
	}
	void makesSalad(){
		cout << "The chef makes salad" << endl;
	}
};

int main(){
	Chef chef;
	cout << chef.makesChicken() << endl;
}
