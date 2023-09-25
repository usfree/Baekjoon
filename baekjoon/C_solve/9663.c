#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	value_ck(int* arr, int i)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (i - k == arr[i] - arr[k] || i - k == -arr[i] + arr[k]
			|| arr[i] == arr[k])
			return (0);
		k++;
	}
	return (1);
}

void	tenq(int* arr, int i, int j, int* cnt, int n)
{
	if (i == n)
	{
		(*cnt)++;
		return;
	}
	while (j < n)
	{
		arr[i] = j;
		if (value_ck(arr, i) == 1)
			tenq(arr, i + 1, 0, cnt, n);
		j++;
	}
}

int	ft_ten_queens_puzzle(int n)
{
	int	*arr;
	int	cnt;

	cnt = 0;
	arr = (int*)malloc(sizeof(int) * n);
	tenq(arr, 0, 0, &cnt, n);
	return (cnt);
}

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%d", ft_ten_queens_puzzle(n));
}
