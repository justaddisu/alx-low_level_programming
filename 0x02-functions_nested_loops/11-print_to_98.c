#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 * @n: input number to check
 * Return: nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
		    printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
