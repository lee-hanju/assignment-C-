#include<iostream>
#include<string>
using namespace std;
int main() {
	char a[100];
	int b = 0;
	int x = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�).";
	cin.getline(a, 100);
	b = strlen(a);
	for (int i = 0; i < b; i++)
	{
		if (a[i] == 'x')
		{
			x = x + 1;
		}
	}
	cout << "x�� ������" << x;
}