#include <iostream>
using namespace std;

int main(){
	int num1, num2, temp;
	
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	
	temp = num1; // temp takes num1, num1 is empty
	num1 = num2;// num1 takes num2, num2 is empty
	num2 = temp;// num2 takes num1, temp is empty again
	
	cout << "After swapping the first number is: " << num1 << endl;
	cout << "After swapping the secocnd number is: " << num2 << endl;
	
	return 0;
}
