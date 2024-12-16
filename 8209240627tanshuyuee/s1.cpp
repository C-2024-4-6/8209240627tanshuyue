#include <iostream>
using namespace std;
int main()
{
	cout << "输入一个字符" << endl;
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z')   //判断输入的这个字符是大写还是小写
	{
		cout << "输入的是小写字符" << endl;
		a = toupper(a);
		cout <<"该字符的大写字符为："<< a << endl;

	}
	else
	{
		char b = a + 1;
		int c = static_cast<int>(b);
		cout <<a<< "后继字符的ASCII码是：" << c << endl;
	}
}