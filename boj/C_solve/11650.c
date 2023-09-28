#include <stdio.h>

typedef struct xy {
	int x;
	int y;
}	XYstruct;

XYstruct XY[100001];

int compare(void* first, void* second)
{
	XYstruct A = *(XYstruct*)first;
	XYstruct B = *(XYstruct*)second;

	if (A.x > B.x)
		return 1;
	else if (A.x < B.x)
		return -1;
	else
	{
		if (A.y > B.y)
			return 1;
		else if (A.y < B.y)
			return -1;
	}
}

int main(void)
{
	int N;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d %d", &XY[i].x, &XY[i].y);

	qsort(XY, N, sizeof(XYstruct), compare);

	for (int i = 0; i < N; i++)
		printf("%d %d\n", XY[i].x, XY[i].y);
}