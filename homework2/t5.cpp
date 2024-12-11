#include <iostream>
using namespace std;
int monkey(int a) {
	if (a == 10)
		return 1;
	else
		return(monkey(a + 1) + 1) * 2;
}
int main() {
	int a = monkey(1);
	cout << a << endl;
	return 0;
}