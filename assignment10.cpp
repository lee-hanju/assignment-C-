#include <iostream>
#include<string>
using namespace std;
int main() {
	cout << "���ڿ� �Է�>>";
	int a = 0;
	char lee[100];
	cin.getline(lee, 100);
	a = strlen(lee);
	string str;
	for (int i = 0; i <a; i++)
	{
		str += lee[i];
		cout << str << endl;
	}
}