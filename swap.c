#include <stdio.h>
#include "sort.h"

/**
* swap - function that swaps two values
* @a: first value
* @b: second value
* Return: 0
*/
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
