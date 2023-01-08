#include <iostream>
using namespace std ;

int main(){
	int num1, num2, remainder, quotient;
	
	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	
	quotient = num1/num2;
	remainder = num1 % num2;
	
	cout << "Quotient: "  << quotient << endl;
	cout << "Remainder: " << remainder << endl;
	
	return 0;
}
