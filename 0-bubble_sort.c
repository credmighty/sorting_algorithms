#include "sort.h"

/**
 * swap - func to swap integers
 * @xp: arg 1
 * @yp: arg 2
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - func that sort as array of integers ascending
 * @array: the array of integers
 * @size: length of the array
 *
 * Description: Prints the array after each swap
 *              An optimized version of Bubble Sort
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				print_array(array, size);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
