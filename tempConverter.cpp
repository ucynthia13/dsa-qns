#include <iostream>
using namespace std;

int main(){
	double temp;
	double tempConverted;
	
	cout << "Enter the temperature in celcius: " << endl;
	cin >> temp;
	
	double res = 9/5;
	tempConverted = res * temp + 32;
	
	cout << "The temperature in fahreinheit: " << tempConverted <<  endl;
}
