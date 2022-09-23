#include <stdio.h>
/**
 * rev_string -  reverses a string.
 * @s: The value
 *
 *
 * Return None
 */
void rev_string(char *s)
{
	char temp;
	int i, slen, slen1;

	slen = 0;
	slen1 = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}

	slen1 = slen - 1;

	for (i = 0; i < slen / 2; i++)
	{
		temp = s[i];
		s[i] = s[slen1];
		s[slen1--] = temp;
	}

}
