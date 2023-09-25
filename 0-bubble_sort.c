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
 * bubble_sort - Sort an array of integers in ascending order
 * @array: array of integers to sort and print.
 * @size: size of array.
 *
 * Description: Prints array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	int x, done = 1, len = size;

	do {
		done = 0;
		for (x = 0; x < (len - 1); x++)
		{
			if (array[x] > array[(x + 1)])
			{
				table_swap(array + x, array + (x + 1));
				print_array(array, size);
				done = 1;
			}
		}
		len--;

	} while (done == 1);

}
