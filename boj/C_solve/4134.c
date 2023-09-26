#include <stdio.h>
#include <math.h>

int	ft_is_prime(long long nb)
{
	int	i;
	int	tmp;

	tmp = sqrt(nb);
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
	{
		if (nb == 2)
			return (1);
		else
			return (0);
	}
	i = 2;
	while (i <= tmp)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	int size;
	long long n;
	int i = 0;

	scanf("%d", &size);
	
	while (i < size)
	{
		scanf("%lld", &n);
		while (ft_is_prime(n) == 0)
			n++;
		printf("%lld", n);
		if (i != size - 1)
			printf("\n");
		getchar();
		i++;
	}
}