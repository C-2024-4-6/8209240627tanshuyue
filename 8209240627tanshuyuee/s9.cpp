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
	cout << "�����򵽵�"<<m<<"�첻�ٹ���ƻ����" << endl;
	n = (1.0 / 2.0) * m * (2 + j);
	cout << "һ��������" << n << "��ƻ����" << endl;
	t = (0.8) * n;
	w = t / m;
	cout << "ƽ��ÿ�컨��" << w << "Ԫ��" << endl;
	return 0;

}