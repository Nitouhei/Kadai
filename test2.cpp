#include <stdio.h>
#include <conio.h>

void main()
{
	float maxhp = 2500;
	float hp = 1200;
	float HPBar = hp / maxhp * 100;

	for (HPBar; HPBar<100; HPBar++)
	{
		if ((int)HPBar % 7 == 0)
		{
			printf("™");
		}

	}

	printf("\n");

	_getch();

}