#include <iostream>
#include <string>
using namespace std;

int main()
{
	int id;
	string name;

	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> id;

	cout << endl << "<출력>" << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << id << endl;

	return 0;
}