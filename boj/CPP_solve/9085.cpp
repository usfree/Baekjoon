#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--)
	{
		int N, result = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			int input;
			cin >> input;
			result = result + input;
		}
		cout << result << '\n';
	}
}
