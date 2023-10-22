#include <iostream>
using namespace std;

int main(void)
{
	string input;
	cin >> input;

	if (input.length() == 2)
	{
		cout << input[0] - '0' + input[1] - '0';
	}
	else if (input.length() == 3)
	{
		if (input[1] == '0')
		{
			cout << (input[0] - '0') * 10 + input[2] - '0';
		}
		else {
			cout << (input[1] - '0') * 10 + input[0] - '0';
		}
	}
	else {
		cout << (input[0] - '0') * 10 + (input[2] - '0') * 10;
	}
}