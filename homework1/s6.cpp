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
	cout << "输入两个正整数，求得其最大公约数和最小公倍数。" << endl;
	cin >> a >> b;
	cout <<a<<"和 "<<b<<"最大公约数为：" << gcd(a, b) << endl;
	cout << a<<"和"<<b<<"最小公倍数为：" << lcm(a, b) << endl;
	return 0;
}