#include <iostream>
using namespace std;

int main(){
	int i, spaces, totalWords, totalChars = 0;
	char space = ' ';
	char delimiter = '\0';
	string userInput;
	
	cout << "Enter a string: " << endl;
	getline(cin, userInput);
	
	for (i= 0; i<userInput.size(); i++){
		//userInput.size() - size of characters in userInput
		
	}
	
	end:
		cout << "Number of characters without spaces: " << (totalChars - space) << endl;
		cout << "Number of characters with spaces: " << (totalChars + spaces) << endl;
		cout << "Number of words: " << totalWords << endl;
}
