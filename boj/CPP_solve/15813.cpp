#include <iostream>
using namespace std;

int main()
{
	int N, result = 0;
	int name[27] = { 0 };
	char input;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> input;
		name[input - 64]++;
	}

	for (int i = 0; i < 27; i++)
		result = result + (i * name[i]);

	cout << result;
}