#include <iostream>
using namespace std;

int main(){
	string userInput;
	string checkString;
	int i,j;
	
	cout << "Enter a string: " << endl;
	getline(cin, userInput);
	
	for(i=0; i< userInput.length(); i++){
		for(j= userInput.length(); j > 0; j--){
			if(userInput[i] == userInput[j]){
				checkString[0] == userInput[j];
			}
		}
		
	}
			
		if(checkString == userInput)
		{
			cout << "Palindrome" << endl;
		}else{
			cout << "Not palindrome" << endl;
		}
}
