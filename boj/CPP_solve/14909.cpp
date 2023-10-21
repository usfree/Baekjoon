#include <iostream>
using namespace std;

int main(void)
{
	int N;
	int result = 0;
	while (scanf("%d", &N) != EOF)
	{
		if (N > 0)
			result++;
	}
	cout << result;
}