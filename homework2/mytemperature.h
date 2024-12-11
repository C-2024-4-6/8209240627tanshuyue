using namespace std;
double celsius_to_fah(double cel) {
	cout << "celsius" << "  " << "fahrenheit" << endl;
	cout<<cel<<"        "<<(9 * cel) / 5.0 + 32<<endl;
	return 0;
}
double fahrenheit_to_cels(double fah) {
	cout << "fahrenheit" << "  " << "celsius" << endl;
	cout<<fah<<"        "<<5 * (fah - 32) / 9.0;
	return 0;
}