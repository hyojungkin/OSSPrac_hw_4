#include <iostream>
#include <string>
using namespace std;

int main()
{
	int id;
	string name;
	string major;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "�й��� �Է��ϼ���: ";
	cin >> id;
	cout << "�а��� �Է��ϼ���: ";
	cin >> major;

	cout << endl << "<���>" << endl;
	cout << "�̸�: " << name << endl;
	cout << "�й�: " << id << endl;
	cout << "�а�: " << major << endl;

	return 0;
}