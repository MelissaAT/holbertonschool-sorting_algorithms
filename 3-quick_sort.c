#include "sort.h"
/**
 * quick_sort - 
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{

    if (size < 2)
	{
        return;
    }

    int pivot = array[size - 1];


    int i = -1;
    size_t j = 0;
    while (j < size - 1)
	{
        if (array[j] < pivot)
		{
            i++;

            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;

            print_array(array, size);
        }
        j++;
    }

    int temp = array[i + 1];
    array[i + 1] = array[size - 1];
    array[size - 1] = temp;

    print_array(array, size);


    quick_sort(array, i + 1);
    quick_sort(array + i + 2, size - i - 2);
}

