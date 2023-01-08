#include <iostream >
using namespace std;

int main(){
	string userInput;
	
	cout << "Enter a value: " << endl;
	getline (cin, userInput);
	
	if(isdigit(userInput)){
		cout << "The value entered is an integer" << endl;
	}else if(isalpha(userInput)){
		cout << "The value entered is an alphabet" << endl;
	}else{
		cout << "The value entered is neither an integer or an alphabet" << endl;
	}
}
