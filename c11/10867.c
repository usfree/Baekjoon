#include <stdio.h>

int main(void)
{
	int n;
	int arr[2001] = { 0 };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int num;
		scanf("%d", &num);
		if (num < 0)
			arr[(num * -1) + 1000]++;
		arr[num]++;
	}

	int i = 2000;
	while (i >= 1001)
	{
		if (arr[i] != 0)
			printf("%d ", 1000 - i);
		i--;
	}

	i = 0;
	while (i <= 1000)
	{
		if (arr[i] != 0)
			printf("%d ", i);
		i++;
	}
}