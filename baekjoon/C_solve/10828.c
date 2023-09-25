#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[10000];
	int now = -1;
	int N;

	scanf("%d", &N);

	while (N--)
	{
		char op[6];
		scanf("%s", op);

		if (op[0] == 'p' && op[1] == 'u'&& op[2] == 's')
		{
			int num = 0;
			scanf("%d", &num);
			arr[++now] = num;
		}

		else if (op[0] == 'p' && op[1] == 'o' && op[2] == 'p')
		{
			if (now == -1)
				printf("%d\n", now);
			else
				printf("%d\n", arr[now--]);
		}

		else if (op[0] == 's' && op[1] == 'i' && op[2] == 'z')
		{
			printf("%d\n", now + 1);
		}

		else if (op[0] == 'e' && op[1] == 'm' && op[2] == 'p')
		{
			if (now == -1)
				printf("1\n");
			else
				printf("0\n");
		}

		else if (op[0] == 't' && op[1] == 'o' && op[2] == 'p')
		{
			if (now == -1)
				printf("%d\n", now);
			else
				printf("%d\n", arr[now]);
		}
	}
}