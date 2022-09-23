#include <stdio.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: The value
 *
 *
 * Return None
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');

}
