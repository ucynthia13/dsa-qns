//#include <iostream>
//using namespace std;
//
//int main(){
//	int sn = 7;
//	int guess; 
//	int guessCount;
//	
//	while(sn != guess){
//		cout << "Enter a number: ";
//		cin >> guess;
//		guessCount++;
//		
//		if((guessCount>=3) && (guess != sn)){
//			cout << "Failed!";
//			break;
//		}else if((guessCount<=3) && (guess == sn)){
//			cout << "You won";
//			break;
//		}
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int power(int baseNumber, int powerNumber){
	int result = 1;
	//assuming powerNumber has to be positive 
	for(int i=0; i< powerNumber; i++){
		result = result * baseNumber;
		//result is firsy assigned the value of baseNumber
	}
	return result;
}
int main(){
	cout << power(3,3);
}
