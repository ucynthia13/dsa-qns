#include <iostream>
using namespace std;

int main(){
	int arr[7] = {4,7,6,5,3,2,9};
int n = 7;
int x;
int key = 5;
for(x= 0; x<n; x++){
	if(arr[x] == key){
		cout << x <<endl;
		return x;
	}
	
}
	return -1;
}
