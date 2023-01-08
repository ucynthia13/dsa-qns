#include <iostream>
using namespace std;

int main(){
	int i;
	int product=1;
	
	for (i=2; i< 100;i++ ){
		if(i% 1 == 0 && i% i==0){
			product=product*i;
		}
	}
	
	cout << "The product of prime numbers between 1 and 100: " << product << endl;
	
	return 0;
}
