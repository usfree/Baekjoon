#include <stdio.h>
#include <string.h>

int compare(void* first, void* second)
{
	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}

int main(void)
{
	int T;
	int Tarr[1000][10];
	
	scanf("%d", &T);
	int i = 0;
	while (T--)
	{
		for (int j = 0; j < 10; j++)
			scanf("%d", &Tarr[i][j]);


		qsort(Tarr[i], 10, sizeof(int), compare);

		printf("%d\n", Tarr[i][2]);
		i++;
	}
}