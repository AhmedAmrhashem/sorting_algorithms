#include "sort.h"

/**
 * selection_sort - a function that sorts an array with selection sort
 * @array: the array to be sorted
 * @size: the length of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int min = 0;
	int temp;
	int i, j;
	int Tall = size;
	for (i = 0; i < Tall - 1 ; i++)
	{
		min = i;
		for (j = i + 1; j < Tall; j++)
		{
			if (array[min] < array[j])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
