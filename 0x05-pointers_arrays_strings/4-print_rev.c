#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: The value
 *
 *
 * Return None
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len; len - 1; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');

}
