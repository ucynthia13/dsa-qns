#include <iostream>
using namespace std;

int main(){
	int i;
	int product;
	
	for (i= 2; i< 20; i++){
		if(i%3==0){
			product*=i;
		}
	}
	
	cout << "The product of all odd numbers between 1 and 20: " << product << endl;
	
	return 0;
}
