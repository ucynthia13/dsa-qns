#include <iostream>
using namespace std;

class Rectangle{
	public: 
	int width;
	int height;
	int area(){
		return width * height;
	};
};

int main(){
	Rectangle rectangle;
	rectangle.height = 30;
	rectangle.width = 20;
	cout << rectangle.area();
	return 0;
}
