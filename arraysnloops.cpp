#include <iostream>
using namespace std;

int main(){
	//two-dimensional arrays
	int days[5][3]{
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	for (int i=0; i< 5; i++){
		for(int j=0; j< 3; j++){
			cout << days[i][j];
		}
	}
	return 0;
}
