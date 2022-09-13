#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 *
 * Return: 0 on success
 */
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
