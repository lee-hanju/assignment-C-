#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원" << pages << "페이지" << endl;
	}
	string getTitle() { return title; }
	void operator +=(int n) { price += n; }
	friend Book operator -=(Book& b, int n);
};
Book operator -=(Book& b, int n) {
	b.price -= n;
	return b;
}

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}