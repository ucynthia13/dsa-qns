#include <iostream>

using namespace std;

class Book{
	public: 
		string bookTitle;
		string bookAuthor;
		int bookPages;
		//specification, blueprint, template of a book
};

int main(){
	Book book;
	book.bookTitle = "It ends with us";
	book.bookAuthor = "Colleen Hover";
	book.bookPages = 330;
	cout << book.bookTitle <<endl;
	cout << book.bookAuthor <<endl;
	cout << book.bookPages << endl;
}
