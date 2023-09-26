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
 * lomuto_partition - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
int lomuto_group(int *array, size_t size, int left, int right)
{
	int *pivot, up, down;

	pivot = array + right;
	for (up = down = left; down < right; down++)
	{
		if (array[down] < *pivot)
		{
			if (up < down)
			{
				table_swap(array + down, array + up);
				print_array(array, size);
			}
			up++;
		}
	}

	if (array[up] > *pivot)
	{
		table_swap(array + up, pivot);
		print_array(array, size);
	}

	return (up);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: starting index of the array partition to order
 * @right: ending index of the array partition to order
*/
void lomuto_scheme(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_group(array, size, left, right);
		lomuto_scheme(array, size, left, part - 1);
		lomuto_scheme(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_scheme(array, size, 0, size - 1);
}
