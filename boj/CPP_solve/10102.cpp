#include <iostream>
using namespace std;

int main(void)
{
	int N, A=0, B=0;
	char V[16];

	cin >> N;
	cin >> V;

	for (int i = 0; i < N; i++)
	{
		if (V[i] == 'A')
			A++;
		else if (V[i] == 'B')
			B++;
	}

	if (A > B)
		cout << "A";
	else if (A < B)
		cout << "B";
	else
		cout << "Tie";
}