#include <stdio.h>
/**
 * puts_half - prints every other character of a string,
 * starting with the first character
 * @str: The value
 *
 *
 * Return None
 */
void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			putchar(str[n + 1]);
		}
	}
	putchar('\n');

}
