#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int n,int key){
int s = 0, e = n-1;
while(s<=e){
int mid = s + (e-s)/2;
if(a[mid] == key){
return mid;
}else if(a[mid] > key){
e = mid-1;
}else{
s = mid + 1;
}
}
return -1;
}

int main(){
	int a[] = {5,3,2,1,4,6,8};
	int n =7;
	cout << BinarySearch(a,n,4);
	return 0;
	
}
