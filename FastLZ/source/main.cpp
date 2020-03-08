#include <iostream>
#include "fastlz.h"

using namespace std;

int main()
{
	char dat1[1024] = "hello the world, my name is zoumz, are you ok? hello zoumz i'm fine hello the kunlun database";
	char dat2[1024] = { 0 };
	char dat3[1024] = { 0 };
	

	int len1 = strlen(dat1);
	//int len2 = fastlz_compress(dat1, len1, dat2);
	int len2 = fastlz_compress_level(2, dat1, len1, dat2);
	int len3 = fastlz_decompress(dat2, len2, dat3, len1);
	
	cout << endl;
	cout << len1 << " -> " << len2 << " -> " << len3 << endl;
	cout << memcmp(dat1, dat3, 1024) << endl;
	cout << dat3 << endl;
	
	getchar();
	return 0;
}