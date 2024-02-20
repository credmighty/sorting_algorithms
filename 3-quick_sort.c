#include "sort.h"

/**
 * swap - function to interchange elements
 * @xp: arg1
 * @yp: arg2
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * quick_sort - sort an array ascending order of
 *				integers using quicksort algorithm
 * @array: array of integers
 * @size: the length of the array
 *
 * Description: uses the Lomuto partition scheme. Prints
 *				the array after each swap of the elements
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}


/**
 * lomuto_sort - recursive implementation of quicksort
 * @array: an array of integers
 * @size: length of the array
 * @lo: starting index of the array partition to order.
 * @hi: ending index of ...
 *
 * Description: uses the Lomuto partition scheme
 */
void lomuto_sort(int *array, size_t size, int lo, int hi)
{
	int part;

	if (hi - lo > 0)
	{
		part = lomuto_partition(array, size, lo, hi);
		lomuto_sort(array, size, lo, part - 1);
		lomuto_sort(array, size, part + 1, hi);
	}
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
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pvt, above, below;

	pvt = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pvt)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pvt)
	{
		swap(array + below, array + above);
		print_array(array, size);
	}

	return (above);
}
