#include <iostream>
using namespace std;


int main(){
	int num1, num2, result,choice;
	char option;

	cout << "1.Add" << endl;
	cout << "2.Substract" << endl;
	cout << "3.Multiply"<< endl;
	cout << "4.Divide" << endl;
	cout << "5.Modulus" << endl;
	
	start:cout << "Enter your choice: \t" << endl;
	cin >> choice; 
	if(choice>5 || choice < 1){
		goto end;
	}
	cout << "Enter two integers: " << endl;
	cin >> num1 >> num2;
	
	switch(choice){
		case 1: 
		cout << "Result: " << num1 + num2 << endl;
		break;
		
		case 2: 
		cout << "Result: " << num1 - num2 << endl;
		break;
		
		case 3: 
		cout << "Result: " << num1 * num2 << endl;
		break;
		
		case 4: 
		cout << "Result: " << num1 / num2 << endl;
		break;
		
		case 5: 
		cout << "Result: " << num1 % num2 << endl;
		break;
		
		end:default: 
		
		cout << "Enter a valid choice.";
		
	}
	
	cout << "Continue? (y/n): "<< endl;
	cin >> option;
	
	if(option == 'y' || option == 'Y'){
		goto start;
	}
	
	return 0;
}
