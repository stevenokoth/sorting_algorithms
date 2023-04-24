#include "sort.h"
/**
 * bubble_sort ; arranges array in ascending order
 * @array: means a pointer to anarray
 * @size: mean the size of an array
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				n = array[j];
				array[j] = array[j - 1];
				array[j - 1] = n;
				print_array(array, size);
			}
		}
	}
}
