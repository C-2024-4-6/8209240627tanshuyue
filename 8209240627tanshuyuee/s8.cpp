#include <iostream>
using namespace std;
int main()
{
	double x=0,a;
	cout << "����һ�������õ���ƽ������" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "����û��ƽ������" << endl;
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
	cout << a << "��ƽ����Ϊ" << x << endl;
	return 0;
}