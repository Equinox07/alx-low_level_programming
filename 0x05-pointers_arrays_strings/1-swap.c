#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: The value
 * @b: The value
 *
 * Return None
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}