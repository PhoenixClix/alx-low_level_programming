#include "function_pointers.h"

/**
  * int_index - Function that searches for an integer.
  * @array: Location to be searched.
  * @size: Number of elements in the array @array.
  * @cmp: Pointer to the function to be used to compare values.
  *
  * Return: The index of the first element for which the @cmp function does
  *			not return 0
  *		-1 - if no element matches
  *		   - if size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
