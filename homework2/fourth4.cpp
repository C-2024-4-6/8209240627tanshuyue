#include<iostream>
using namespace std;
void merge(int*list1, int size1, int*list2, int size2, int*list3) {
	int i = 0;
	int j = 0;
	while (i < size1) {
		list3[i] = list1[i];
		i++;
	}
	while (j < size2) {
		list3[i] = list2[j];
		i++;
		j++;
	}
}
int main() 
{
	int size1, size2;
	cout << "�����һ������ĳ��ȣ�";
	cin >> size1;
	int*list1=new int[size1];
	cout << "�����һ�������Ԫ��";
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
		}
	cout << "����ڶ�������ĳ��ȣ�";
	cin >> size2;
	int*list2=new int[size2];
	cout << "����ڶ��������Ԫ��";
	for (int j = 0; j < size2; j++) {
		cin >> list2[j];
	}
	int*list3=new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	cout << "�ϲ��������Ϊ��";
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
	delete[]list1;
	delete[]list2;
	delete[]list3;
	return 0;
}