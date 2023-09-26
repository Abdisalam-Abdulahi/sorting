#include "sort.h"

/**
  *selection_sort -implementing selection sort algorith
  *@array: the array to be sorted
  *@size: the size of the array
  */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	size_t position;
	int temp;
	int small;

	while (i < size)
	{
		small = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] <= small)
			{
				small = array[j];
				position = j;
			}
		}
		if (position != i)
		{
			temp = array[i];
			array[i] = small;
			array[position] = temp;
			print_array(array, size);
		}
		i++;
		if (array[i] == small)
			break;
	}
}
