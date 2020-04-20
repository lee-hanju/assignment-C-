#include <iostream>
using namespace std;

int main() {
	int* p = new int[5];
	int sum = 0;
	double avg;
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> p[i];
		sum += p[i];
	}
	avg = sum / 5.0;
	cout << "평균" << avg;
	delete[]p;
}