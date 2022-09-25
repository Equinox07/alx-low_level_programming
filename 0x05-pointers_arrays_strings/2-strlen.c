#include <stdio.h>
/**
 * _strlen - Returns the length of a string..
 * @s: The value
 *
 *
 * Return: the length of a string as a number or integer
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')

		i++;

	return (i);

}
