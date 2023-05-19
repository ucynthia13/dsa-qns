#include<iostream>
using namespace std;

struct Rectangle{
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
