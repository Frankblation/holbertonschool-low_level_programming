#include "search_algos.h"
/**
* linear_search - matches elememnts of whole list.
* @array: the array
* @size: size of the number in array
* @value: the key
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

		if (array == NULL)
		return (-1);

		for (i = 0; i < size; i++)
		{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		}
		return (-1);
}
