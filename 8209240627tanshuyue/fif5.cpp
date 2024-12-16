#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int xini=60, int yini=80) :x(xini), y(yini) {};
	void setpoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()const
	{
		cout << "×ø±êÎª:" << "(" << x << "," << y << ")" << endl;;
	}
};
int main()
{
	point p;
	p.display();
	p.setpoint(5, 6);
	p.display();
	return 0;


}