#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: arr
 *@size: size
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	i = s1 = s2 = 0;
	j = size - 1;
	while (i <= size * size)
	{
		s1 += a[i];
		i += size + 1;
	}
	while (j <= (size * size) - size)
	{
		s2 += a[j];
		j += size - 1;
	}
	printf("%d, %d\n", s1, s2);
}
