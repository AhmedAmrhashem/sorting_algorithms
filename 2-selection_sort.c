#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int min = 0;
	int temp;
	int i, j;
	for(i = 0; i < size - 1; i++)
	{
		min = i;
		for(j = i + 1; j < size; j++)
		{
			if(array[min] < arry[j])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array[array];
	}
