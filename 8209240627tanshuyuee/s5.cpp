#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char e;
	cout << "请输入一行字符，按回车结束统计。" << endl;
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
		cout << "英文字母个数为：" << a << endl;
		cout << "空格个数为：" << b << endl;
		cout << "数字字符个数为：" << c << endl;
		cout << "其他字符个数为：" << d << endl;
	

	return 0;

}