#include "main.h"
/**
 * print_alphabet -This program prints the alphabet from a-z
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
