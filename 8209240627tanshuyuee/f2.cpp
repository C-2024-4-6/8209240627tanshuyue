#include <iostream>
using namespace std;
int main()
{
	double a, b;     //����Բ׶��׶�װ뾶��׶��
	const double pai = 3.1415926;  //�ñ�ʶ�����������   
	cout << "��Բ׶�����" << endl;     
	cout << "����Բ׶�װ뾶" << endl;   //��ʾ�û�����׶�װ뾶��׶��
	cin >> a;
	cout << "����׶��" << endl;
	cin >> b;
	double v = (1.0/3.0)*(pai * a * a * b);  //����������õ�Բ׶���
	cout << "��Բ׶�����Ϊ��"<< v << endl;
	return 0;
	
}