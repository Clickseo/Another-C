int	MAX(int a, int b, int c, int d)
{
	int		max;

	max = (a > b) ? a : b;
	max = (c > max) ? c : max;
	max = (d > max) ? d : max;

	return max;
}
