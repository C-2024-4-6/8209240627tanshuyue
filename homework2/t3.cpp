#include<iostream>
#include "mytemperature.h"
using namespace std;
int main()
{
	double fah, cel;
	cin >> fah >> cel;
	celsius_to_fah(cel);
	fahrenheit_to_cels(fah);
	return 0;
}