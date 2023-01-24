#include "sort.h"

/**
 * bubble_sort - sort list with bubble
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, x = size;
	int y;

	if (array == NULL)
		return;
	for (t = size; x > 0; x--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				holder = array[n];
				array[n] = array[n + 1];
				array[n + 1] = y;
				print_array(array, size);
			}
		}
	}
}
