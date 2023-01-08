#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b;
	int hyp;
	int hypSq;
	
	cout << "Enter the first number: " << endl;
	cin>>a;
	cout << "Enter the second number: " << endl;
	cin>>b;
	
	if((a>1&&a<100) && (b>1&&b<100)){
		hyp = sqrt(pow(a,2) + pow(b,2));
		hypSq  = (pow(a,2) + pow(b,2));
		if(hypSq == pow(hyp,2)){
			cout << "The numbers " << "(" <<a<< "," <<b<< ")" " satisfy the hypotenuse rule.";
		}else{
			cout << "The numbers " << "(" <<a<< "," <<b<< ")" " can not satisfy the hypotenuse rule.";
		}
	}
	
	return 0;

}
