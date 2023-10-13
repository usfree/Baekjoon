#include <iostream>
using namespace std;

void two(int N)
{
	if (N > 1)
		two(N / 2);
	cout << N % 2;
}

int main(void)
{
	int N;
	cin >> N;

	two(N);
}