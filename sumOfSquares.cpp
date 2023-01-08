#include <iostream>
#include <math.h>
using namespace std;

int sums;
int squares;
int difference;

int sumOfSquares(int numbers){
	int i= 0;

	while(i<= numbers){
		sums+=pow(i,2);
		i++;
	}
	
	cout << "The sum of squares of " << numbers << " first natural numbers: " << sums << endl;
	
	return sums;
	
}

int squareOfSums(int numbers){
	int i,sum;
	
	for(i= 1; i<= numbers; i++){
		sum+=i;
		squares = pow(sum ,2);
	}
	
	
	cout << "The square of sum of " << numbers << " first natural numbers: " << squares << endl;
	
	return squares;
}

int main(){
	
	int nums;
	
	cout << "Enter the number of numbers: " << endl;
	cin >> nums;
	
	sumOfSquares(nums);
	squareOfSums(nums);
	cout << "Difference: " << squares - sums << endl; 
	
	return 0;
}
