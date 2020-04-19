#include<iostream>
#include<string>
using namespace std;
int main() {
	char a[100];
	int b = 0;
	int x = 0;
	cout << "문자들을 입력하라(100개 미만).";
	cin.getline(a, 100);
	b = strlen(a);
	for (int i = 0; i < b; i++)
	{
		if (a[i] == 'x')
		{
			x = x + 1;
		}
	}
	cout << "x의 개수는" << x;
}