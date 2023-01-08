#include <iostream>

using namespace std;

int minDistance(int number){
        int fact1 = 1;
        int minDist = number;
        int fact2;
        for(int i= 2; i< number; i++){
            if (number% i==0){
            fact2 = i; //update to the factor
                if((fact2-fact1)<= minDist){
                    minDist = fact2-fact1; //update the minDist to the result difference 
                    fact1 = fact2;  //the value of fact1 is updated to the current value of fact2                 
                }           
            }
        }
        cout << "The minimum distnce of " << number << " is: " << minDist << endl;
    return minDist;
}  

int main(){
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	minDistance(num);
	return 0;
}

//1,2,3,4,5
