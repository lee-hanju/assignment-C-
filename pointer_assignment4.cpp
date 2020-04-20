#include<iostream>;
using namespace std;

class Sample {
private:
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];// n�������迭�� ��������
	}
	void read();// ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է¹���
	void write();// �����迭�� ȭ�鿡 ���
	int big();//���� �迭���� ���� ū �� ����
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
	cout << "���� ū ���� " << s.big() << endl;
}