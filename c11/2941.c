#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[101];
	int i = 0;
	int cnt = 0;

	scanf("%s", arr);
	while (i < strlen(arr))
	{
		if (arr[i] == 'l' && arr[i + 1] == 'j')
			i++;
		else if (arr[i] == 'c' && arr[i + 1] == '=')
			i++;
		else if (arr[i] == 'c' && arr[i + 1] == '-')
			i++;
		else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=')
			i += 2;
		else if (arr[i] == 'd' && arr[i + 1] == '-')
			i++;
		else if (arr[i] == 'n' && arr[i + 1] == 'j')
			i++;
		else if (arr[i] == 's' && arr[i + 1] == '=')
			i++;
		else if (arr[i] == 'z' && arr[i + 1] == '=')
			i++;
		i++;
		cnt++;
	}

	printf("%d", cnt);
}