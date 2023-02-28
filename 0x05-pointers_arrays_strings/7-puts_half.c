#include "main.h"

/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/

void puts_half(char *str)
{
	int g, m, length;

	length = 0;
	for (g = 0; str[g] != '\0'; g++)
	length++;
	m = (length / 2);
	if ((length % 2) == 1)
	m = ((length + 1) / 2);
	for (g = m; str[g] != '\0'; g++)
	_putchar(str[g]);
	_putchar('\n');
}
