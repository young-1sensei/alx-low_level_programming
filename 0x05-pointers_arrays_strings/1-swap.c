#include "main.h"
/**
 * swap_int - function that swaps the values of two intergers.
 * @a: Pointer input
 * @b: Pointer input
 */
void swap_int(int *a, int*b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
