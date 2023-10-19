#include <iostream>
using namespace std;

int main(void)
{
	int T, S;

	cin >> T >> S;

	if (S == 1)
		cout << "280";
	else if (T >= 12 && T <= 16)
		cout << "320";
	else
		cout << "280";
}