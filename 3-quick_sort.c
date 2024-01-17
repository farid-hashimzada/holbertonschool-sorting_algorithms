#include "sort.h"
/**
 *swap - swap array element
 *@array: point to array
 *@i:first elemtn for swap
 *@j:second elemenet for swap
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
/**
 *quick_sort - sorts an array of integers in ascending orde
 *@array: pointer of array
 *@size: size of array
 *
 */
void quick_sort(int *array, size_t size)
{
int low, high;
if (array == NULL || size == 0)
	return;

low = 0;
high = size - 1;
my_sort(array, low, high, size);
}
/**
 *my_sort - sorts array using low and high positons
 *@array: point to array
 *@low: fistt element of array
 *@high: last  element of array
 *@size: size of array
 */

void my_sort(int *array, int low, int high, size_t size)
{
int p;
	if (low < high)
	{
	p = partition(array, low, high, size);
	my_sort(array, low, p - 1, size);
	my_sort(array, p + 1, high, size);
}
}
/**
 * partition - sections an array using Lomuto quick_sort algo
 * @array: list of integers
 * @low: first index of array
 * @high: lowest index of array
 * @size: size of array
 * Return: position of pivot in array
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i;
	int j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	return (i);
}

