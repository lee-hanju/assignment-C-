#include<iostream>
using namespace std;
int main() {
	cout << "�̸���?";
	char name[100];
	cin.getline(name, 100, '\n');
	
	
	cout << "�ּҴ�?";
	char adress[100];
	cin.getline(adress, 100, '\n');
	

	cout << "���̴�?";
	int age;
	cin >> age;
	
	cout << name;
	cout << adress;
	cout << age << "��";
}