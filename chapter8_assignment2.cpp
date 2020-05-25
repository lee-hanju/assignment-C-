#include<iostream>
#include<string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) {this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() :Circle(0) { name = ""; }
	NamedCircle(int r, string name) :Circle(r) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};
int main() {
	NamedCircle pizza[5];
	string name;
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >> ";
		int n;
		cin >> n >> name;
		pizza[i].setRadius(n);
		pizza[i].setName(name);
	}
	double max = pizza[0].getArea();
	for (int i = 0; i < 5; i++) {
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
			name = pizza[i].getName();
		}
	}
	cout << "가장 면적이 큰 피자는 " << name << "입니다." << endl;
}