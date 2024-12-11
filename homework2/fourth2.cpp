#include<iostream>
using namespace std;
void bubblesort(double list[], int listsize)
{
	bool changed = true;
	do 
	{
		changed = false;
		for(int j=0;j<listsize-1;j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
void dispaly(double list[], int size)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << list[j] << " ";
		}
		cout << endl;
	}
int main() 
{
	double list[10];
	cout << "输入十个双精度的数字" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	bubblesort(list, 10);
	cout << "排序后的数组：" << endl;
	dispaly(list, 10);
}