#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_s - doubly linked list node
*
* @n: integer stored in the node
* @prev: pointer to the previous element of the list
* @next: pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void swap(int *a, int *b);
void bubble_sort(int *array, size_t size);

#endif /* SORT_H */
