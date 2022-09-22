#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
