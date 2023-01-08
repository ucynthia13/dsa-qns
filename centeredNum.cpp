#include <iostream>
using namespace std;

int main(){
	int i,size,array[size], j, result = 0;
	cout << "Enter the size of your array: ";
	cin >> size;
	cout << "Enter " << size << " elements: " << endl;
//	for(i=0; i<= size; i++){
//		cin >> arr[i];
//	}

	while(i< size){
		cin >> array[i];
		i++;
	}
	
	//check if size is odd
	if(size % 3 == 0){

	int half = size /2;//center
	int centerEl = array[half];//element in te center
	//loop to find the element smaller than the centeredEl
	//1,2,3,4,5
	for(i=0; i<= size; i++){
		if(array[i] >= centerEl){
			result = 1;
		}else{
			result = 0;
		}
	}
	
	cout << "\nResult: " << result;
}else {
	cout << "Result: " << result;
}
  return 0;
}
