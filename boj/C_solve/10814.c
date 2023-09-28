#include <stdio.h>

typedef struct human {
	int age;
	char name[101];
	int access;
}	Human;

Human people[100000];

int compare(void* first, void* second)
{
	Human A = *(Human*)first;
	Human B = *(Human*)second;
	if (A.age > B.age)
		return 1;
	else if (A.age < B.age)
		return -1;
	else
	{
		if (A.access > B.access)
			return 1;
		else if (A.access < B.access)
			return -1;
		else
			return 0;
	}
}

int main(void)
{
	int N;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %s", &people[i].age, &people[i].name);
		people[i].access = i;
	}

	qsort(people, N, sizeof(Human), compare);

	for (int i = 0; i < N; i++)
		printf("%d %s\n", people[i].age, people[i].name);
}