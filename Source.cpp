#include "stdafx.h"  
#include <iostream>  
#include "testDll.h"  

using namespace std;

int main()
{
	int a[10][10];
	int b[10][10];
	int c[10][10];
	a[0][0] = 1;
	a[0][1] = 2;
	a[1][0] = 3;
	a[1][1] = 4;
	b[0][0] = 1;
	b[0][1] = 2;
	b[1][0] = 3;
	b[1][1] = 4;

	MatrixLibrary::Class1::Multiply(2, 2, 2, 2, a, b, c);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}