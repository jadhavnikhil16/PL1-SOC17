#include<iostream>
include<string>
using namespace std;

class Book{
	private:
	int bookId;
	string title;
	string author;
	float price;
	static int bookCount;


	public:
	book(int id=0, string t  ="Unkown", string a="Unkown",float p= 0.0) {
		bookId=id;
		title=t;
		author=a;
		price=p;
		bookCount++;
		cout<<"Book created . Total books:" << bookCount <<endl;
	}
	book(const Book &b)  {
	bookId=b.bookId;
	title=b.title;
	author=b.author;
	price=b.price;
	bookCount++;
	cout<<"Book copied.Total books"	<< bookCount <<endl;
}
~Book(){
	bookCount--;
	cout<<"Book destroyed . Total Books:"<< bookCount <<endl;
	}

	void display()  const {
	cout<<"Book Id:"<< bookId << endl;
	cout<<"Title:" << title << endl;
	cout<<"Author" << author << endl;
}
	static int getBookCount(){
	return bookCount;
	}
};

int Book::bookCount =0;

int main() {
	Book b1(101,"C++ Programming", "Bjarne Stroustrup", 4500);
	b1.display();

	Book b2(b1);
	b2.display();

	cout<<"Total books :"<< Book::getBookCount() <<endl;
	return 0;	
}
