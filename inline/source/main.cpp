#include <iostream>

using namespace std;

#define dfunc(a, b) (a+b)

int cfunc(int a, int b)
{
	return (a + b);
}

inline static int ifunc(int a, int b)
{
	return (a + b);
}

/* ����ģʽ�£���Ctrl+F11�򿪷���ര�ڡ� */
int main()
{
	int dret = dfunc(1, 2);
	int cret = cfunc(3, 4);
	int iret = ifunc(5, 6);
	cout << "hello"  << endl;
	cout << dret << endl;
	cout << cret << endl;
	cout << iret << endl;
	return 0;
}