#include<iostream>
using namespace std;
bool isprime(int num)
{
	if (num < 1) return false;
	for(int i = 2; i < num; i++) {
		if(num%i==0)
			return false;
	}
	return true;
}
int main() 
{
	int a = 0;
	int num=1;
	while (a < 200) {
		if (isprime(num)) {
			cout << num << "\t";
			a++;
			if (a % 10 == 0) {
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}