#include <iostream>
#include <arch.h>
#include <sizelint.h>

using namespace std;

typedef struct typ1 {
	char c[5];
}typ1;

SIZE_OF_TYPE_EQUAL_TO(char, 1);
//SIZE_OF_TYPE_EQUAL_TO(typ1, 4);
SIZE_OF_TYPE_EQUAL_TO(typ1, 5);
//SIZE_OF_TYPE_EQUAL_TO(typ1, 6);

int main()
{
	cout << "hello the world" << endl;
	getchar();
	return 0;
}