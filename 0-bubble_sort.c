#include "sort.h"
/*bubble_sort - a function that sorts an array using Bubble sort algorithms
 * @array: point to array
 * @size: size of array
 * Return: void
 * */


void bubble_sort(int *array, size_t size)
{
int i = 0, temp;
bool swapped = false;
do
{
swapped = false;
for (size_t j = 0; j < size - i - 1;j++)
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
}while(swapped);
}
