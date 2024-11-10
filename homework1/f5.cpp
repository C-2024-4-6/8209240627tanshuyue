#include <iostream>
using namespace std;
int main()
{
	float a;
	float b;
	cout << "华氏温度转换为摄氏温度" << endl;
	cout << "输入华氏温度：" << endl;//提示用户输入想要转换的华氏温度
	cin >> a;
	b = (a - 32) * (5.0 / 9.0);      //进行华氏温度转换成摄氏温度的计算
	cout << "摄氏温度为：" << b << endl;
	return 0;

	

}