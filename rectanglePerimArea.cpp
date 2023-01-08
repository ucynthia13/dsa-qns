#include <iostream>
using namespace std;

int main(){
	double perimeter,area;
	double length, width;
	
	cout << "Enter the length: " << endl;
	cin >> length;
	cout << "Enter the width: " << endl;
	cin >> width;
	
	perimeter = (length+width) * 2;
	area = length * width;
	
	cout << "The perimeter is: " << perimeter << endl;
	cout << "The area is: " << area << endl;
	
	return 0;
	
}
