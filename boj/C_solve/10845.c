#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[10000];
	int charge = -1;
	int now = 0;
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
			arr[++charge] = num;
		}

		else if (op[0] == 'p' && op[1] == 'o' && op[2] == 'p')
		{
			if (now > charge)
				printf("-1\n");
			else
				printf("%d\n", arr[now++]);
		}

		else if (op[0] == 's' && op[1] == 'i' && op[2] == 'z')
		{
			printf("%d\n", charge - now + 1);
		}

		else if (op[0] == 'e' && op[1] == 'm' && op[2] == 'p')
		{
			if (now - charge == 1)
				printf("1\n");
			else
				printf("0\n");
		}

		else if (op[0] == 'f' && op[1] == 'r' && op[2] == 'o')
		{
			if (now - charge == 1)
				printf("-1\n");
			else
				printf("%d\n", arr[now]);
		}
		else if (op[0] == 'b' && op[1] == 'a' && op[2] == 'c')
		{
			if (now - charge == 1)
				printf("-1\n");
			else
				printf("%d\n", arr[charge]);
		}
	}
}