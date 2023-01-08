#include <iostream> 

using namespace std ;
int dayNum;
string dayOfTheWeek(int dayNum){
	
	switch (dayNum){
		case 0:
			cout << "Sunday" << endl; 
			break;
			
		case 1: 
			cout << "Monday" << endl;
			break;
			
		case 2: 
			cout << "Tuesday" << endl;
			break;
		default: 
			cout << "Enter a valid number" << endl;
	}
}

int main(){
	cout << "Enter a number of the day of the week: ";
	cin >> dayNum;
	cout << dayOfTheWeek(dayNum);
	return 0;
}
