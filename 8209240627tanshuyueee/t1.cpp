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
	cout << "������������������������Լ������С��������" << endl;
	cin >> c >> d;
	lcm (c, d, a, b);
	cout << c << "�� " << d << "���Լ��Ϊ��" << b<< endl;
	cout << c<< "��" << d << "��С������Ϊ��" <<  a<< endl;
	return 0;
}