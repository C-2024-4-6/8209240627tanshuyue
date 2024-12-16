#include<iostream>
using namespace std;
class Time             
{
private: 
	int hour=0;
	int minute=0;
	int sec=0;
public:
	void settime(int hour,int minute,int sec) 
	{
		this->hour = hour, this->minute = minute, this->sec = sec;
	}
	void print(int hour,int minute,int sec)
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	
};
int main()
{
	int h, m, s;
	Time t1;
	cout << "输入一个时间：" << endl;
	cin >> h >> m >> s;
	t1.settime(h, m, s);
	t1.print(h,m,s);
	return 0;
}