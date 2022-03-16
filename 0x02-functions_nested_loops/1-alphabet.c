#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(){

	char c = 'a';

	for(c = 'a'; c <= 'z'; c++){

		printf("%c\n", c);

	}
}

int main(void)
{
    print_alphabet();
    return (0);
}

