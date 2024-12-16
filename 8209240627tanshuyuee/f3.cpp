#include <iostream>
using namespace std;
int main()
{
	cout << "char length;" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "int:" << sizeof(int) << endl;
	cout << "short:" << sizeof(short) << endl;
	cout << "long:" << sizeof(long) << endl;
	cout << "long long :" << sizeof(long long) << endl;
	cout << "float:" << sizeof(float) << endl;
	cout << "double:" << sizeof(double) << endl;
	cout << "long double:" << sizeof(long double) << endl;
	cout << "char:" << sizeof(char) << endl;
	cout << "wchar_t:" << sizeof(wchar_t) << endl;
	cout << "bool:" << sizeof(bool) << endl;
	return 0;
}