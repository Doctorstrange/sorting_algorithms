#include "sort.h"

/**
 * table_swap - Swap two integers in an array.
 * @x: first integer to swap.
 * @y: second integer to swap.
 */
void table_swap(int *x, int *y)
{
	int table = 0;

	table = *x;
	*x = *y;
	*y = table;
}

/**
 * selection_sort - Sort an array of integers
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *sm;
	size_t x, y;

	if (size < 2 || array == NULL)
	{
		return;
	}

	for (x = 0; x < size - 1; x++)
	{
		sm = array + x;
		for (y = x + 1; y < size; y++)
			if (array[y] < *sm)
			{
				sm = array + y;
			}

		if ((array + x) != sm)
		{
			table_swap(array + x, sm);
			print_array(array, size);
		}
	}
}
