#include <iostream>
using namespace std;
int main()
{
	float a, b, c,d;
	cout << "输入三角形的三条边长:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a+b>c&&a-b<c)
	{
		d = a + b + c;
		cout << "三角形的周长为：" << d << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else 
		{
			cout << "该三角形不是等腰三角" << endl;
		}
	}
	else 
	{
		cout << "此三角形不存在！" << endl;

	}

}