#include <iostream>
using namespace std;

int main(){
	int i, sum;
	for (i= 0; i< 100; i++){
		if(i% 2 == 0){
			sum += i;
		}
	}
	
	cout << "The sum of even numbers less than 100: " << sum << endl;
}
