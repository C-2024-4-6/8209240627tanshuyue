#include <iostream>
using namespace std;
int main()
{
	float a, b, c,d;
	cout << "���������ε������߳�:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a+b>c&&a-b<c)
	{
		d = a + b + c;
		cout << "�����ε��ܳ�Ϊ��" << d << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else 
		{
			cout << "�������β��ǵ�������" << endl;
		}
	}
	else 
	{
		cout << "�������β����ڣ�" << endl;

	}

}