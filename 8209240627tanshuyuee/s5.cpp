#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char e;
	cout << "������һ���ַ������س�����ͳ�ơ�" << endl;
	while ((c = cin.get()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			a++;
		}
		else if (c == ' ')
		{
			b++;
		}
		else if (c >= '0' && c <= '9')
		{
			c++;
		}
		else
		{
			d++;
		}
	}
		cout << "Ӣ����ĸ����Ϊ��" << a << endl;
		cout << "�ո����Ϊ��" << b << endl;
		cout << "�����ַ�����Ϊ��" << c << endl;
		cout << "�����ַ�����Ϊ��" << d << endl;
	

	return 0;

}