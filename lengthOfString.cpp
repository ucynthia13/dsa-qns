#include <iostream> 
using namespace std;

int main(){
	string stringInput;
	int i , count = 0 ;
	bool isEmpty = stringInput.empty();
	
	cout << "Enter a string: " << endl;
	getline(cin, stringInput);
	
	while(stringInput[i] != '\0'){
		 count++; //increment the count
		 i++;// increment 
	}
	cout << "The length of the string: " << count << endl;
}
