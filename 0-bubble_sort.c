#include "sort.h"

/**
 * bubble_sort - a function that sorts an array with bubble sort
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	int i;
	int j;
	int length = size;

	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - i - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				print_array(array, size);
			}
		}
	}
}
