#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;

	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
