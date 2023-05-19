#include <iostream>
using namespace std;
class Rectangle{
	int w, h;
	public: 
	Rectangle(int a, int b){
		w=a;
		h=b;
	}
	int area(){
		return w * h;
	}
};

int main(){
	Rectangle r = Rectangle(3, 5);
	Rectangle *rectangle = new Rectangle(3,5);
	cout << "Area = " << r.area() << endl;
	cout << "Area = " << rectangle->area();
	delete rectangle;
	
	return 0;
}
