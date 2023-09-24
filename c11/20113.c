#include <stdio.h>
#include <string.h>

int main(void)
{
	int base[101];
	int N;

	for (int i = 0; i < 101; i++)
		base[i] = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		base[num]++;
	}

	int i = 1;
	int bignum = 0;
	int index = 0;
	int tick = 0;
    
	while (i < 101)
	{
		if (bignum < base[i])
		{
			bignum = base[i];
			index = i;
			tick = 0;
		}
		else if (bignum == base[i])
			tick++;
		i++;
	}

	if (tick != 0)
		printf("skipped");
	else
		printf("%d", index);
}