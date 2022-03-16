#include "main.h"

/**
 * main - program that prints _putchar.
 *
 * Return 0
 */

int main(void)
{	
	char addisu[] = "_putchar";	
	int c;
	for(c = 0; c < 8; c++)
	{
		_putchar(addisu[c]);
	}
	_putchar('\n');
	return (0);
}
