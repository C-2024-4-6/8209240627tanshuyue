#include <iostream>
using namespace std;
int main()
{
	int j;
	float n ,t ,w ;
	for (int i = 2; i <= 100; i = i * 2)
	{
		j=i;
	}	
	int m;
	for ( m=1; j!=2; m++)
	{
		j = j / 2;
	}
	cout << "当购买到第"<<m<<"天不再购买苹果。" << endl;
	n = (1.0 / 2.0) * m * (2 + j);
	cout << "一共购买了" << n << "个苹果。" << endl;
	t = (0.8) * n;
	w = t / m;
	cout << "平均每天花费" << w << "元。" << endl;
	return 0;

}