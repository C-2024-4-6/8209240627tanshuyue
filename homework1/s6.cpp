#include <iostream>
using namespace std;

int gcd(int x,int y)
	{
		if (x % y == 0)
			return y;
		else
			return gcd(y, x % y);
	}
	int lcm(int x, int y)
	{
		return x * y / gcd(x, y);
	}
int main ()
{
	int a, b;
	cout << "������������������������Լ������С��������" << endl;
	cin >> a >> b;
	cout <<a<<"�� "<<b<<"���Լ��Ϊ��" << gcd(a, b) << endl;
	cout << a<<"��"<<b<<"��С������Ϊ��" << lcm(a, b) << endl;
	return 0;
}