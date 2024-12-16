#include<iostream>
using namespace std;
void main()
{
int i, j, * pi, * pj;   
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << '\t' << j << '\t' << pi << '\t' << pj;
cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
    int a[] = { 1,2,3 };
    int* p, m;
    p = a;    //将数组a首地址送给p
    for (m = 0; m < 3; m++)
        printf("%d,%d,%d,%d\n", a[m], p[m], *(p + m), *(a + m));  //与cout功能差不多
}
