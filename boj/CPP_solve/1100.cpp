#include <iostream>
using namespace std;

int main(void)
{
	int arr[8][8];
	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			char input;
			cin >> input;
			if (input == '.')
				arr[i][j] = 0;
			else if (input == 'F')
				arr[i][j] = 1;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0 && j % 2 == 0)
			{
				if (arr[i][j] == 1)
					result++;
			}
			else if (i % 2 == 1 && j % 2 == 1)
			{
				if (arr[i][j] == 1)
					result++;
			}
		}
	}

	cout << result;
}