#include <iostream>
using namespace std;

int main(){
	string userInput;
	int i, count = 0;
	char space = ' ';

	cout << "Enter a string: " << endl;
	getline(cin, userInput);
	
	for (i=0; i<userInput.size(); i++){
		if(userInput[i] == space) {
			count++;
		}
	}
	
	cout << "The number of spaces: " << count << endl;
}
