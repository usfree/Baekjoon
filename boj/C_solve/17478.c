#include <stdio.h>

void ft_first(int num)
{
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++) printf("____");
		printf("\"����Լ��� ������?\"\n");
		for (int j = 0; j < i; j++) printf("____");
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		for (int j = 0; j < i; j++) printf("____");
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		for (int j = 0; j < i; j++) printf("____");
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	}
}

void ft_second(int num)
{
	for (int i = 0; i < num; i++) printf("____");
	printf("\"����Լ��� ������?\"\n");
	for (int i = 0; i < num; i++) printf("____");
	printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
}

void ft_third(int num)
{
	for (int i = num; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
			printf("____");
		printf("��� �亯�Ͽ���.\n");
	}
}

int main(void)
{
	int N;

	scanf("%d", &N);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	ft_first(N);
	ft_second(N);
	ft_third(N);
}