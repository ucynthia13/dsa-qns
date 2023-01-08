#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10] = {1,2,3,4,5,6};
	int length = (sizeof(a)/ sizeof(*a));
	int length2 = end(a) - begin(a);
	cout << length << endl;
	cout << length2 << endl;
	cout << size(a) << endl;
	
	for(int i= 0; i< length; i++){
		cout << a[i] << endl;
	}
}
