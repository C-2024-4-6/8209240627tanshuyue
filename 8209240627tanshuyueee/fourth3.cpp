#include<iostream>
using namespace std;
int main()
{
	bool locked[100] = { false };
	for(int stu=1;stu<=100;stu++)
	{
		for (int lock = stu; lock<= 100; lock+=stu)  //lock表示储物柜
		{
			locked[lock - 1] = !locked[lock - 1];

		}
	}
	cout << "开着的储物柜的编号：" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (locked[i]) {
			cout << (i + 1) << " ";
		}
	}
	cout << endl;
	return 0;
}
