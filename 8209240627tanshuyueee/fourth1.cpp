#include<iostream>
using namespace std;
int main()
{
	int num1[10];
	int num2[10];
	int dif = 0;
	cout << "����ʮ������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> num1[i];
		bool isdif = true;
		for (int j = 0; j < dif; j++)
		{
			if (num1[i] == num2[j])
			{
				isdif = false;
				break;
			}
		}
		if (isdif) {
			num2[dif] = num1[i];
			dif++;
		}
	}
	cout << "��ͬ�������У�" << endl;
		for (int m = 0; m < dif; m++) {
			cout << num2[m] << " ";
		}
	cout << endl;
	return 0;
}