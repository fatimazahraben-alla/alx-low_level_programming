/**
 *reverse_array - reverse array
 *@a: arr
 *@n: int
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
