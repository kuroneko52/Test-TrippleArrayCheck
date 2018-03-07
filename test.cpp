// Sroot.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int array3Da[2][2][3] = { 
	{ { 1, 2, 3 },{ 4, 5, 6 } },
	{ { 7, 8, 9 },	{ 10, 11, 12 }} 
	};

	int *p;
	p = new int[2 * 2 * 3];

	p = (int *)array3Da;

	int NY = 2, NZ = 3;

	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 2; y++) {
			for (int z = 0; z < 3; z++) {
				cout << array3Da[x][y][z] << ' ';
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 2; y++) {
			for (int z = 0; z < 3; z++) {
				//(x*NY+y)*NZ+z
				cout << p[(x * NY + y) * NZ + z] << ' ';
			}
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}