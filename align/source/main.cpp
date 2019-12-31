#include <iostream>
#include <arch.h>
#include <align.h>

using namespace std;

int main()
{
	align1 a1;
	align2 a2;
	align3 a3;
	align4 a4;

	cout << endl;
	cout << "size a1\t: " << sizeof(a1) << endl;
	cout << "size a1.value1_i8\t: "  << sizeof(a1.value1_i8)  << endl;
	cout << "size a1.value2_i8\t: "  << sizeof(a1.value2_i8)  << endl;

	cout << endl;
	cout << "size a2\t: " << sizeof(a2) << endl;
	cout << "size a2.value1_i8\t: "  << sizeof(a2.value1_i8)  << endl;
	cout << "size a2.value2_i16\t: " << sizeof(a2.value2_i16) << endl;

	cout << endl;
	cout << "size a3\t: " << sizeof(a3) << endl;
	cout << "size a3.value1_i8\t: "  << sizeof(a3.value1_i8)  << endl;
	cout << "size a3.value2_i16\t: " << sizeof(a3.value2_i16) << endl;
	cout << "size a3.value3_i8\t: "  << sizeof(a3.value3_i8)  << endl;

	cout << endl;
	cout << "size a4\t: " << sizeof(a4) << endl;
	cout << "size a4.value1_i8\t: "  << sizeof(a4.value1_i8)  << endl;
	cout << "size a4.value2_i8\t: "  << sizeof(a4.value2_i8)  << endl;
	cout << "size a4.value3_i16\t: " << sizeof(a4.value3_i16) << endl;

	getchar();
	return 0;
}