#include <stdio.h>

int main(void)
{
	int n, cnt = 0;
	int i = 3;

	scanf("%d", &n);

	while (n > 0)
	{
		while (n % 5 == 0 && n > 0)
		{
			n = n - 5;
			cnt++;
		}
		if (n > 0)
		{
			n = n - 3;
			cnt++;
		}
	}
	if (n != 0)
		printf("-1");
	else
		printf("%d", cnt);
}