#include <iostream>
using namespace std;

int main(){
	const double PI = 3.14;
	double radius, volume;
	
	cout << "Enter the radius: " << endl;
	cin >> radius;
	
	double radiusCubed = radius * radius * radius;
	double threeFour = 4/3;
	
	volume = threeFour * PI *radiusCubed;
	
	cout << "The volume of your sphere is: " << volume << endl;
	
	return 0;
}
