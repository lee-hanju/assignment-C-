#include<iostream>;
using namespace std;

class Sample {
private:
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];// n개정수배열의 동적생성
	}
	void read();// 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력받음
	void write();// 정수배열을 화면에 출력
	int big();//정수 배열에서 가장 큰 수 리턴
	~Sample();
};

void Sample::read() {
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
		
	}
	cout << endl;
}

int Sample::big() {
	int b = p[0];
	for (int i = 1; i <size; i++)
	{
		if (b <p[i])
		{
			b = p[i];
		}
	}
	return b;
}

Sample::~Sample(){
	delete p;
}

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}