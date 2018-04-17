//変数(int)Aには１が入っている
//2回左シフトして値を出力せよ。
#include <stdio.h>
#include <conio.h>


void main()
{
	int A = 1;

	A = A << 2;


	printf("%d", A);
	_getch();
}