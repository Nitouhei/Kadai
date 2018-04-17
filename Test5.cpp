//変数Aには(1000)²が入っている。
//右シフト１して出力せよ。

#include <stdio.h>
#include <conio.h>


void main()
{
	int A = 1000;
	A = 1000 >> 1;
	printf("%d", A);
	_getch();
}