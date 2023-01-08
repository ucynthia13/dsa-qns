#include <iostream>
using namespace std;
//write a function which is returning the number which is occuring many times

int n[10] = {4,2,3,4,2,3,4,2,4,2};

int count,highCount,num,i,j;

int main(){
	for(i=0; i<= 10; i++){
		count =0;
		highCount =0;
		for(j=0; j<= 10; i++ ){
			count++;
		}
		//check if the number of times 
		//the num occured
		if(count > highCount){
			highCount = count;
			num = n[i];
		}
	}
	
	cout << num << "\n" << highCount << endl;
	return 0;
}


