#include <iostream>
#include <stack>
using namespace std;

int countDigit(int number, int count){

	int counter = 0;
	
	if(number < 0){
		counter = -1;
	}
	
	while(number > 0){
		int digit = number % 10;
		
		if(digit == count){
			counter++;
			
		}
		
		number /= 10;
	}
	
	cout << "Count: " << counter << endl;
	
	return counter;
}	


int main(){
	
	int find, num;
	
	cout << "Enter a number: " << endl;
	cin >> num;
	
	cout << "Enter the number to be found: " <<  endl;
	cin >> find;
	
	countDigit(num, find);
	
	return 0;
	
}
