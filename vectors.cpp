#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> vect1(5, 12);
	cout << "Capacity: " << vect1.capacity() << endl;
	cout << "Size: " << vect1.size() << endl;
	cout << "Maximum Size: " << vect1.max_size() << endl;
 	for (int i = 0; i < vect1.size(); i++) {
        cout << vect1[i] << " ";
    }
	return 0;
}
