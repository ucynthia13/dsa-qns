#include <iostream>
using namespace std;

void factorsFind(int num){
	int i;
	
	for (i= 0; i< num; i++){
		if(num% i == 0){
			if(i == 3){
				cout << "Pling" << endl;
			}else if (i == 5){
				cout << "Plang" <<endl;
			}else if(i == 7){
				cout << "Plong" << endl;
			}else {
				cout << i;
			}
		}
	}

}

int main(){
	
	int i,num;
	
	cout << "Enter a number: " << endl;
	cin >> num;

   	cout << "The factors of " << num << " are : " << endl;
   	for(i=1; i <= num; i++) {
      if (num % i == 0){
      	if(i==3){
      		cout << "Pling" << endl;
		  }else if(i == 5){
		  	cout << "Plang" << endl;
		  }else if(i== 7){
		  	cout << "Plong" << endl;
		  }else {
		  	cout << i << endl;
		  }
	  }
      	
   }

	return 0;
}
