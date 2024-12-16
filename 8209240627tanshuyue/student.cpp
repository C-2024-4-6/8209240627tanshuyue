#include <iostream>
#include"student.h"  
using namespace std;
void Student::display()  
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sec:" << sex << endl;
}
void Student::set_value(int n, const char *nm , char s) 
{
    num = n;
    int i = 0;
    for (; i < 19 && nm[i] != '\0'; i++)
    {
        name[i] = nm[i];
    }
    name[i] = '\0';
    sex = s;
}