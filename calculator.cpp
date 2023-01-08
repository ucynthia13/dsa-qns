#include <iostream>

using namespace std;

int main(){
	int number1, number2;
	char op;
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << "Enter the operator: ";
	cin >> op;
	
	switch(op){
		case '+':
			cout << number1 + number2;
			break;
		case '-':
			cout << number1 - number2;
			break;
		case '*':
			cout << number1 * number2;
			break;
		case '/':
			cout << number1 / number2;
			break;
		default:
			cout << "Enter a valid operator!";
	}
}
