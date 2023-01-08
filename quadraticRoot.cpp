#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float a,b,c;
	float x1,x2;
	
	cout << "Enter the 3 indices of your function (a,b,c): " << endl;
	cin>> a >> b >> c;
	
	float res = pow(b,2)-4*a*c;
	x1 = (-b + sqrt(res)) / 2*a;
	x2 = (-b - sqrt(res)) / 2*a;
	
	cout << "The value of x1: " << x1 << endl;
	cout << "The value of x2: " << x2 << endl;
	
	return 0;
}
