#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	for (int i = 0; s[i] != '\0'; i++) {
		char ch = s[i];
		if (ch >= 'A' && ch <= 'Z') {
			ch = ch + ('a' - 'A');
		}
		if (ch >= 'a' && ch <= 'z'){
			counts[ch-'a']++;
		}
	}
}
int main()
{
	char s[100];
	int counts[26];
	cout << "����һ���ַ�����";
	cin.getline(s, 100);
	count(s, counts);
	cout << "��ĸ���ִ������£�" << endl;
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			cout << char(i + 'a') << ":" << counts[i] << endl;
		}
	}
	return 0;
}
