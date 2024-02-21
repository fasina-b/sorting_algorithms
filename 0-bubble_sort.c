#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @first: Pointer to the first integer to swap.
 * @second: Pointer to the second integer to swap.
 */
void swap(int *first, int *second)
{
	 int temp;

	 temp = *first;
	 *first = *second;
	 *second = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order using algorithm.
 * @array: array of integers to sort.
 * @size: Size of the array.
 *
 * Description: This function sorts the given array in ascending order
 *              and prints the array after each swap operation.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	boolean swapped = false_value;

	if (array == NULL || size < 2)
		return;

	while (swapped == false_value)
	{
		swapped = true_value;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				swapped = false_value;
			}
		}
		len--;
	}
}
