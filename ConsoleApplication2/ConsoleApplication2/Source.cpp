#include <stdafx.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	char symbol = 'b'; // �����
	char digit = '2'; // �����
	char space = ' '; // �����
	char character = '#'; // ����
	// ������� isalnum() ��������� �������� �� � �������� ������ ��� ������
	cout << symbol << " - it is digit or alpha?: "; isalnum(symbol) ? cout << "true\n" : cout << "false\n";
	// ������� isalpha() ��������� �������� �� � �������� ������
	cout << symbol << " - it is alpha?:          "; isalpha(symbol) ? cout << "true\n" : cout << "false\n";
	// ������� isdigit() ��������� �������� �� � �������� ������
	cout << digit << " - it is digit?:          "; isdigit(digit) ? cout << "true\n" : cout << "false\n";
	// ������� isspace() ��������� �������� �� � �������� ��������
	cout << space << " - it is space?:          "; isspace(space) ? cout << "true\n" : cout << "false\n";
	// ������� islower() ��������� �������� �� � �������� ������ ������� ��������
	cout << symbol << " - it is lower alpha?:    "; islower(symbol) ? cout << "true\n" : cout << "false\n";
	// ������� isupper() ��������� �������� �� � �������� ������ �������� ��������
	cout << symbol << " - it is upper alpha?:    "; isupper(symbol) ? cout << "true\n" : cout << "false\n";
	system("pause");
	return 0;
}