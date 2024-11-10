#include <iostream>
using namespace std;
int main()
{
	double x=0,a;
	cout << "输入一个数，得到其平方根。" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "负数没有平方根。" << endl;
		return 1;
	}
	double n = a;
	double e = 1.00e-10;
	while (true)
	{
		x = 0.5 * (n + a / n);
		if (abs(x - n) < e)
		{
			break;
		}
		n = x;
	}
	cout << a << "的平方根为" << x << endl;
	return 0;
}