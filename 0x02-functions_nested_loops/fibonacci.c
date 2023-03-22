/**
 *fibonacci - print L
 *
 *@n: The value
 *
 *Return: L (Success)
 */
long fibonacci(int n)
{
	long h, k, L;
	int i;

	h = 1;
	k = 0;
	L = n;
	for (i = 2; i <= n; i++)
	{
		L = h + k;
		k = h;
		h = L;
	}
	return (L);
}
