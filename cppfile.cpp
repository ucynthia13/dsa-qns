#include <iostream>
using namespace std;

int getBigger(int num1, int num2, int num3){
	
	if(num1 > num2 && num1 > num3){
		return num1;
	}else if(num2 > num1 && num2 > num3){
		return num2;
	}else if (num3 > num1 && num3 > num2){
		return num3;
	}else{
		cout << "Enter valid inputs!";
	}
}


int main(){
	
	cout << getBigger(18, 13, 500);
	
//	string name = "Cynthia";
//	int age;
//	age = 17;
//    cout << "C++ Program that is written by "<< name<< " at the age of " << age << endl;
//    
//    string school = "Rwanda Coding Academy";
//    cout<< school.substr(5, 3);
    //the first parameter specifies the position,
	// and the second parameter specifies the number of characters to be taken. 
    return 0;
}
