#include <iostream>
using namespace std;

int main(){
	int a = 12;
	int b = 25;
	cout << "A & B : " << (a&b) << endl;
	cout << "A | B : " << (a|b) << endl;
	cout << "A - B : " << (a-b) << endl;
	cout << "B >> 2 : " << (b>>2) << endl;
	cout << "B >> 2 : " << (b>>3) << endl;
	cout << "A << 1 : " << (a<<1) << endl;
	return 0;
} 
