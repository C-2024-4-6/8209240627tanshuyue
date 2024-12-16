#include <iostream>
using namespace std;
int main()
{
	double a, b, f;
	char m;
	cout << "请输入一个四则运算式:" << endl;
	cin >> a >> m >> b;
	
	if (m != '+' && m != '-' && m != '*' && m != '/') 
	{
		cout << "非法运算！" << endl;
	}
	else if(m=='/'&& b==0)
	{
		cout << "分母不能为0！" << endl;
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