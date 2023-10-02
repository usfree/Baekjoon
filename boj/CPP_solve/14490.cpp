#include <iostream>
using namespace std;

int euclid(int a, int b)
{
	if (b == 0)
		return a;
	else
		return euclid(b, a % b);
}

int main(void)
{
	int n, m, r;
	scanf("%d : %d", &n, &m);

	if (n > m)
		r = euclid(n, m);
	else
		r = euclid(m, n);
	cout << n / r << ":" << m / r;
}