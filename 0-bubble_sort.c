#include "sort.h"
#include <stdio.h>

/**
  *bubble_sort - sorts an array in ascending order
  *@array: array to be sorted
  *@size: size of the array to be sorted
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swap = false;

	i = 0;
	while (i < size)
	{
		swap = false;
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				swap = true;
				print_array(array, size);
			}
		}
		if (swap == false)
			break;
		i++;
	}
}
