#include <iostream>
using namespace std;

class Book{
	public: 
		string bookTitle;
		string bookAuthor;
		int bookPages;
		//specification, blueprint, template of a book
		//constructor -special function that is called whenevr we create a new instance 
		Book(string argTitle, string argAuthor, int argPages){
			bookTitle = argTitle;
			bookAuthor = argAuthor;
			bookPages = argPages;

		}
};

int main(){
	Book book1("Akata Witch", "An African Lady", 1000);
	cout << book1.bookTitle << endl;
}
