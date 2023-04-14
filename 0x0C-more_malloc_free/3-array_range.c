#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: min
 *@max: max
 *Return: arr
 */
int *array_range(int min, int max)
{
	int i;
	int *arr = malloc(sizeof(int) * (max - min + 1));

	if(!arr || min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
