#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>



/**
 * struct listint_s - Doubly linked list
 * @n: Integer in list
 * @prev: Pointer to previous element
 * @next: Pointer to next element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;



void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);

void print_list(const listint_t *list);

void print_array(const int *array, size_t size);

#endif
