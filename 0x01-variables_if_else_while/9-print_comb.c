#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if( i != 57 )
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
