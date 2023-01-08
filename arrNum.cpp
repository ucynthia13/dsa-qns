#include<iostream>
using namespace std;
int count_No( int array[]){
	int i,j,num;
	
	int high=0;
	int length  = sizeof(array)/sizeof(array[0]);
	for(i=0;i<=length;i++){
	
		
	 for(j=0;j<=length;j++){
	 		int count = 0;
			if(array[i] == array[j]){
				count++;
			}
			if(count > high){
				high = count;
				num = array[i];
			}
			}
			
	}
	return num;
	
}
int main(){
	int number []= {4,2,3,4,2,4,2,4,2,4,2,4};
	
	cout<< "the number : "<< count_No(number);
	
}
