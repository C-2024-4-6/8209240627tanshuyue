#include<iostream>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString) {
	int length = strlen(hexString);
	int decimalValue = 0;
	for (int i = 0; i < length; i++) {
		char c = hexString[i];
		int digitValue;
		if (c >= '0' && c <= '9') {
			digitValue = c - '0';
		}
		else if (c >= 'A' && c <= 'F') {
			digitValue = c - 'A' + 10;
		}
		else if (c >= 'a' && c <= 'f') {
			digitValue = c - 'a' + 10;
		}
		else {
			cout << c << endl;
			return -1;
		}
		decimalValue = decimalValue * 16 + digitValue;
	}
	return decimalValue;
}
int main()
{
	const char* hexString = "A5";
	int result = parseHex(hexString);
	if (result != -1) {
		cout << hexString << "是" << result << endl;
	}
	else {
		cout << "无法转换" << endl;
	}
	return 0;
}