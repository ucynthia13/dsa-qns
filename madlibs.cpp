#include <iostream>

using namespace std;

int main(){
	string color;
	string prularNoun;
	string celebrity;
	
	cout << "Enter a color: ";
	getline (cin,color);
	cout << "Enter a plural noun: ";
	getline (cin,prularNoun);
	cout << "Enter a celebrity: ";
	getline (cin,celebrity);
	
	cout << "Roses are " << color << endl;
	cout << prularNoun << " are blue" << endl;
	cout << "I love " << celebrity << endl;
}
