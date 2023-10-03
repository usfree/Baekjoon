#include <iostream>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(void)
{
	fastio;
	int Q;
	cin >> Q;
	while (Q--)
	{
		long long a, b;
		cin >> a >> b;
		
		if ((b > a) && (b % a == 0))
			cout << "1" << "\n";
		else
			cout << "0" << "\n";
	}
}