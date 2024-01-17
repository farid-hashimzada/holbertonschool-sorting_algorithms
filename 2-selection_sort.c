#include "sort.h"

/**
 * selection_sort - sorts an arrray
 * @array: array sorted
 * @size: size array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_i;
	int temp;


	for (i = 0; i < size; i++)
	{
		min_i = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_i])
				min_i = j;
		}
		if (min_i != i)
		{
			temp = array[min_i];
			array[min_i] = array[i];
			print_array(array, size);
		}
	}
}
