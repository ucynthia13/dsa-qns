#include <iostream>
using namespace std;

//void findBaseTwo(int n){
//	if(n>1){
//		findBaseTwo(n/2);
//	}
//	cout << n%2;
//}

int countOnes(int number){
	int count;
	while(number>0){
		//count the number of ones 
		count+=number%2;
		number>>=1;
	}
	cout << count;
	
	return count;
}

int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	countOnes(number);
	
	return 0;
	
}
