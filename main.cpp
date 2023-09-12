#include <iostream>
#include <string>
using namespace std;

int main()
{
	int id;
	string name;
	string major;

	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> id;
	cout << "학과를 입력하세요: ";
	cin >> major;

	cout << endl << "<출력>" << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << id << endl;
	cout << "학과: " << major << endl;

	return 0;
}