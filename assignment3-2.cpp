#include<iostream>
using namespace std;

class t {
	public:
	double width;
	double height;
	double getArea();
};
double t::getArea() {
	return (width * height) / 2;
	}
int main() {
	t rect;
	rect.width = 3;
	rect.height = 5;
	cout << "»ï°¢ÇüÀÇ ³ÐÀÌ´Â " << rect.getArea() << endl;
}