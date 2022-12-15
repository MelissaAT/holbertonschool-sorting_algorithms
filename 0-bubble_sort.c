#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascendig order
 * @array:
 * @size: Nuenber of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	for (i = 0, i < n -1; i++)
	{
		for (j = 0; j < (n - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j]
				array[j] = array[j + 1]
				arra[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}

