#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int count;
	string userInput;
	string checkString;
	int i,j;
	
	cout << "Enter a string: " << endl;
	getline(cin, userInput);
	
	for(i=0; i<userInput.length(); i++){
		if(userInput[i] != userInput[userInput.length()-i-1]){
			count = 1;
			break; //terminate immediately
		}
	}
		
		if(count == 1){
			cout << "Not A Palindrome";
		}else{
			cout << "Palindrome";
		}

		return 0;
}
