#include<iostream>
using namespace std;
int indexof(const char s1[], const char s2[]) {
	int len1 = 0, len2 = 0;
	while (s1[len1] != '\0')len1++;
	while (s2[len2] != '\0')len2++;
	for (int i = 0; i < len2 - len1; i++) {
		int j = 0;
		while (j < len1 && s1[j] == s2[i + j]) {
			j++;
		}
		if (j == len1)
		{
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[100], s2[100];
	cout << "输入第一个字符串：";
	cin.getline(s1, 100);
	cout << "输入第二个字符串：";
	cin.getline(s2, 100);
	int index = indexof(s1, s2);
	if (index != -1) {
		cout << "子串" << s1 << "在" << s2 << "中的位置是" << index << endl;
	}
	else {
		cout << s1 << "在" << s2 << "中" << "未找到" << endl;
	}
	return 0;

}