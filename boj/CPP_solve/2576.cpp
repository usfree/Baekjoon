#include <iostream>
using namespace std;

int main(void)
{
	int arr[7];
	int i, result = 0;

	for (i = 0; i < 7; i++)
		cin >> arr[i];

	int min = 101;
	while (i--)
	{
		if (arr[i] % 2 == 1)
		{
			result += arr[i];
			if (min > arr[i])
				min = arr[i];
		}
	}
	if (result == 0)
		cout << "-1";
	else
	{
		cout << result << "\n";
		cout << min;
	}
}