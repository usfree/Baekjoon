#include <stdio.h>

void stackprint(char* stack, int now)
{
	while (now >= 0)
	{
		printf("%c", stack[now]);
		now--;
	}
}

int main(void)
{
	char str[100005] = "";
	char stack[10005] = "";

	gets(str);

	int i = 0;
	int size = strlen(str);
	int now = 0;

	for (int i = 0; i < size; i++)
	{
		if (str[i] == '<')
		{
			stackprint(stack, now - 1);

			now = 0;
			while (str[i] != '>')
			{
				printf("%c", str[i]);
				i++;
			}
			printf(">");
		}
		else if (str[i] == ' ')
		{
			stackprint(stack, now - 1);
			printf(" ");
			now = 0;
		}
		else
		{
			stack[now++] = str[i];
		}
	}
	stackprint(stack, now - 1);
}
