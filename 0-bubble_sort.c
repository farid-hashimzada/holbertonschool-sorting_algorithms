#include "sort.h"
/**
*bubble_sort - a function that sorts an array using Bubble sort algorithms
*@array: point to array
*@size: size of array
*/


void bubble_sort(int *array, size_t size)
{
int i = 0, temp;
size_t j;
bool swapped = false;
if (array == NULL || size == 0)
	return;
do {
swapped = false;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] >  array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swapped = true;
print_array(array, size);
}
}
i++;
} while (swapped);
}
