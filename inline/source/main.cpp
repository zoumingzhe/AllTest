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

/* ��Ŀ����ҳ�£����á�C/C++��->���Ż���->������������չ����
   ����ģʽ�£���Ctrl+F11�򿪷���ര�ڡ� */
int main()
{
	int dret;
	int cret;
	int iret;

	cout << "hello" << endl;

	dret = dfunc(1, 2);
	cout << dret << endl;

	cret = cfunc(3, 4);
	cout << cret << endl;

	iret = ifunc(5, 6);
	cout << iret << endl;

	return 0;
}