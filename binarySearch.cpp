#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x){
	if(right >= left){
		int mid = left + (right - left) /2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid]>x){
			return 	binarySearch(arr , left, right-1, x);
		} 
		return binarySearch(arr, left+1, right, x);
	}
	return -1;
}

int main(){
	int a[] = {5,7,12,15,17,21,26,32,36};
	int x = 36; //element to be found
	int size = sizeof(a)/sizeof(a[0]);
	int result = binarySearch(a,0, size-1, x);
	cout << result;
	return 0;
}
