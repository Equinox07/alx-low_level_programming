#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)
 * buffer pointed to by dest.
 * @dest: Pointer to the string destination
 * @src: Pointer to where to copy string
 *
 * Return: pointer to dest value
 */
void *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest[i]);

}
