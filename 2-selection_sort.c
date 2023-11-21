#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int min = 0;
	int temp;
	int i, j;
	int Tall = size;
	for(i = 0; i < Tall; i++)
	{
		min = i;
		for(j = i + 1; j < Tall; j++)
		{
			if(array[min] < array[j])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
