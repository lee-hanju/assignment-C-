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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	friend bool operator == (Book b, int n);
	friend bool operator == (Book b, string n);
	friend bool operator == (Book b1, Book b2);
};
bool operator == (Book b, int n) {
	if (b.price == n) return true;
	else return false;
}
bool operator == (Book b, string n) {
	if (b.title == n) return true;
	else return false;
}
bool operator == (Book b1, Book b2) {
	if (b1.title == b2.title && b1.price == b2.price && b1.pages == b2.pages) return true;
	else return false;
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}

