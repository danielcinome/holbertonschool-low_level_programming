#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*
*/

int main(int argc, char *argv[])
{
	char sig[] = {+-/%*};
	int i = 0;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	while (i < 5)
	{
		if (argv[2] == sig[i])
			break;
		if (i == 5)
		{
			printf("Error\n");
			exit(99);
		}
	}
	if ((argv[2] == '/' || argv[2] == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	return(0);
}
