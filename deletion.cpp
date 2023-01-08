#include <iostream>
using namespace std;

int main(){
	int i;
	int scores[]={52, 78, 75, 68, 88, 63, 75, 90,78};
	int k =3;
	int n =9;
	int j=k;
	
	while(j<n-1){
		scores[j] = scores[j+1];
		j = j+1 ; //update rhe value of j to j+1 & check the condn again
		n = n-1 ; //update the length value
	}
	
	for(i=0; i< n+1; i++){
	cout << scores[i] << endl;
}
}
