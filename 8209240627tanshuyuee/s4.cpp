#include <iostream>
using namespace std;
int main()
{
	double a, b, f;
	char m;
	cout << "������һ����������ʽ:" << endl;
	cin >> a >> m >> b;
	
	if (m != '+' && m != '-' && m != '*' && m != '/') 
	{
		cout << "�Ƿ����㣡" << endl;
	}
	else if(m=='/'&& b==0)
	{
		cout << "��ĸ����Ϊ0��" << endl;
	}
	else
		switch (m)
		{
		case '*':f = a * b;
			cout << a << m << b << "=" << f << endl;
			break;
		case '+':f = a + b;
			cout << a << m << b << "=" << f << endl;
			break;
		case '-':f = a - b;
			cout << a << m << b << "=" << f << endl;
			break;
		case '/':f = a / b;
			cout << a << m << b << "=" << f << endl;
			break;
		}
	return 0;
}