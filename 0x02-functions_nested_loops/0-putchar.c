#include "main.h"

/**
 * main - program that prints _putchar.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char addisu[9] = "_putchar";

	while (n < 9)
	{
		_putchar(addisu[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
