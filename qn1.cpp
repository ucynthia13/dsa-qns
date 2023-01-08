#include <iostream>

using namespace std;

int main(){
	int i,j,x;
	int numOfnums;
	int nums[500];
	int sum , average = 0
	;
	
	cout << "Enter the number of positive numbers to get: " << endl;
	cin >> numOfnums;
	
	if(numOfnums > 0){
		//number of numbers should be zero
		for (j= 0; j< numOfnums; j++){
			cout << "Enter number " << j+1 << " :" << endl;
			cin >> nums[j];
			
			if(nums[j]<=0){
				goto correct;
			}else if(nums[j] == 1){
				goto terminate;
			}
		}
 			correct:cout << "Enter number " << nums[j] << " :" << endl;
 			cin >> nums[j];

		
		for(x = 0; x < numOfnums; x++){
			sum = sum + nums[x];
			average = (sum /numOfnums);
		}
		
		terminate:
		cout << "Sum: " << sum << endl;
		cout << "Average: " << average << endl;

}
}

