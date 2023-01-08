#include <iostream>
using namespace std;

#define PI 3.14159265;
	int radius;
	
	int area = radius * radius * PI;
	int circ = 2 * PI * radius;

int main(){
	
	cout << "Enter the radius of yoour circle: " << endl;
	cin >> radius;
	cout << "The circumference is: " << circ << endl;
	cout << "The area is: " << area << endl;
	return 0;
}
