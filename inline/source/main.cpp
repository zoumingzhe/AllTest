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

/* 项目属性页下，设置“C/C++”->“优化”->“内联函数扩展”。
   调试模式下，按Ctrl+F11打开反汇编窗口。 */
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