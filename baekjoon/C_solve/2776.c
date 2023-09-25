#include <stdio.h>
#include <stdlib.h>

int compare(void* first, void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int binsearch(int arr[], int len, int key)
{
	int low = 0;
	int high = len - 1;
	int mid;

	while (low <= high)
	{
		mid = low + (high - low) / 2; 
		if (key == arr[mid]) {
			return 1;
		}
		else if (key < arr[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return 0;
}

int main(void)
{
	int t, n, m;
	int* narr;
	int* marr;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		narr = (int*)malloc(sizeof(int) * n);
		for (int j = 0; j < n; j++)
			scanf("%d", &narr[j]);
		scanf("%d", &m);
		marr = (int*)malloc(sizeof(int) * m);
		for (int j = 0; j < m; j++)
			scanf("%d", &marr[j]);

		qsort(narr, n, sizeof(int), compare);

		int k = 0;
		while (k < m)
		{
			int tmp = (binsearch(narr, n, marr[k]));
			printf("%d\n", tmp);
			k++;
		}
	}
}