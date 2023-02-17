#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (success)
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
	int i, e;

	for (n = 48; n <= 57; n++)
	i = 48;
	e = 48;

	while (e < 58)
	{
		for (m = 48; m <= 57; m++)
		i = 48;
		while (i < 58)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
