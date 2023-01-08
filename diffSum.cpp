#include <iostream>
using namespace std;

// Function to calculate sum
int evenOddSum(int arr[], int n)
{
    int x = 0;
    int y = 0;
    int z = 0;
    for (int i = 0; i < n; i++) {
        // Loop to find even, odd sum
        if (arr[i] % 2 == 0){
        //even sum
            x += arr[i];        	
		}
        else{
        	//odd sum
        	y += arr[i];
		}
    }
   	z = y-x;
    cout << "Difference: "<< z << endl;
    return 0;
}
  

int main(){
	int i,size;
	int arr[size];
	cout << "Enter the size of your array: ";
	cin >> size;
	cout << "Enter elements of your array: ";
	
	for(i=0; i< size; i++){
		cin>> arr[i]; //get elements 
	}
	
	evenOddSum(arr, size);
	
	return 0;
	
}
