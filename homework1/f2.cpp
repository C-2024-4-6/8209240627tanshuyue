#include <iostream>
using namespace std;
int main()
{
	double a, b;     //定义圆锥的锥底半径和锥高
	const double pai = 3.1415926;  //用标识符常量定义π   
	cout << "求圆锥的体积" << endl;     
	cout << "输入圆锥底半径" << endl;   //提示用户输入锥底半径和锥高
	cin >> a;
	cout << "输入锥高" << endl;
	cin >> b;
	double v = (1.0/3.0)*(pai * a * a * b);  //输出计算所得的圆锥体积
	cout << "该圆锥的体积为；"<< v << endl;
	return 0;
	
}