#include <iostream>
using namespace std;
//
//int centered(int array[], int size){
//	int i;
//	int half = size /2;//center
//	int centerEl = array[half];//element in te center
//	//loop to find the element smaller than the centeredEl
//	//1,2,3,4,5
//	for(i=0; i< size; i++){
//		if(array[i] > centerEl || array[i] == centerEl){
//			return 1;
//		}else{
//			return 0;
//		}
//	}
//}

int main(){
	int i,size,array[size];
	cout << "Enter the size of your array: ";
	cin >> size;
	cout << "Size / 2: "<< size/2 << endl;
	cout << "Enter " << size << " elements: " << endl;
//	for(i=0; i<= size; i++){
//		cin >> arr[i];
//	}

	while(i< size){
		cin >> array[i];
		i++;
	}
	
	int j, result;
	int half = size /2;//center
	int centerEl = array[half];//element in te center
	//loop to find the element smaller than the centeredEl
	//1,2,3,4,5
	for(i=0; i< size; i++){
		if(array[i] > centerEl || array[i] == centerEl){
			result = 1;
		}else{
			result = 0;
		}
	}
	
	cout << "\nResult: " << result;

  return 0;
}
