#include<iostream>
using namespace std;
class cuboid
{
private:
	int lenth;
	int width;
	int height;
public:
	void setcu(int lenth, int width, int height)
	{
		this->lenth = lenth, this->width = width, this->height = height;
	}
	void v(int l, int w, int h)
	{
		cout << "The cuboid's V is:" << (l * w * h) << endl;
	}
};
int main()
{
	cuboid c1;
	int l, w, h;
	cout << "输入一个长方体的长宽高：" << endl;
	cin >> l >> w >> h;
	c1.setcu(l, w, h);
	c1.v(l,w,h);
}