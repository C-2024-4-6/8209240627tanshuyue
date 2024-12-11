#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return gcd(y, x % y);
}
void lcm(int x, int y,int& a,int& b)
{
	b = gcd(x, y);
	a=(x * y )/ b;
}
int main() 
{
	int a,b,c,d;
	cout << "输入两个正整数，求得其最大公约数和最小公倍数。" << endl;
	cin >> c >> d;
	lcm (c, d, a, b);
	cout << c << "和 " << d << "最大公约数为：" << b<< endl;
	cout << c<< "和" << d << "最小公倍数为：" <<  a<< endl;
	return 0;
}