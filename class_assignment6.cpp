#include <iostream>
using namespace std;
#include <cstdlib>
#include<ctime>

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nexttoo(int a, int b);
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int n = rand();
	if (n % 2 == 0)
	{
		return n;
	}
	else return n - 1;
}

int EvenRandom::nexttoo(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 == 0) return n;
	else return n - 1;
}

int main() {
	EvenRandom r;
	cout << "==0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 132767 사이의 랜덤 정수
		cout << n << " ";
	}
	cout << endl << endl << "--2에서 " << "10 까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nexttoo(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}