#include <iostream>
using namespace std;

void two(long long N)
{
	if (N > 1)
		two(N / 2);
	cout << N % 2;
}

int main(void)
{
	long long N;
	cin >> N;

	two(N);
}