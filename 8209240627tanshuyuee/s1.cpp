#include <iostream>
using namespace std;
int main()
{
	cout << "����һ���ַ�" << endl;
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z')   //�ж����������ַ��Ǵ�д����Сд
	{
		cout << "�������Сд�ַ�" << endl;
		a = toupper(a);
		cout <<"���ַ��Ĵ�д�ַ�Ϊ��"<< a << endl;

	}
	else
	{
		char b = a + 1;
		int c = static_cast<int>(b);
		cout <<a<< "����ַ���ASCII���ǣ�" << c << endl;
	}
}