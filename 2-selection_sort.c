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
	size_t i, j;
	int *tmp = NULL, z;

	for (i = 0; array && i < size - 1; i++)
	{
		tmp = NULL;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				if (tmp && array[j] < *tmp)
					tmp = &array[j];
				if (!tmp)
					tmp = &array[j];
			}
		}
		if (tmp)
		{
			z = *tmp;
			*tmp = array[i];
			array[i] = z;
			print_array(array, size);
		}
	}
}
