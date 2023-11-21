#include "sort.h"

/**
 * swap - swaps two variables
 * @a: the first variable
 * @b: the second variable
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * quick_sort - the wrapper function to kickstart the sorting
 * @array: array 2 B sorted
 * @size: how tall is the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - a function that sorts an array
 * 	with the quick sort algorithm
 * @array: the array 2 be sorted
 * @start: the start of the array
 * @end: the end of the array
 *
 * Return: void
 */
void quick_sort_recursive(int *array, int start, int end, size_t size)
{
	if (start < end)
	{
		int pivot = partition(array, start, end, size);
		quick_sort_recursive(array, start, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, end, size);
	}
}

/**
 * partition - the function that divides the array into two sub arrays
 * @array: the array to be partitied
 * @start: the start of the array
 * @end: the end of the array
 *
 * Return: index of the pivot element
 */
int partition(int *array, int start, int end, size_t size) 
{
	int pivot = array[end];
	int i = (start - 1);
	int j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[end]);
	print_array(array, size);
	return (i + 1);
}
