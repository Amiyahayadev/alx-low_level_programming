#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to set the value of a pointer to a char
 * @to: normain pointer to a char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
