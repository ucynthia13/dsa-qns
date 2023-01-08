#include <iostream>
using namespace std;

void print(){
	cout << "User defined functions" << endl;
}

double maximum(double x, double y, double z){
	double maxiValue = x;
	if(y> maxiValue)
		maxiValue = y;
	
	if(z>maxiValue)
		maxiValue = z;
		
		return maxiValue;
}

int main(){
	print();
	cout<< maximum(1,2,3);
	return 0;
	
}
