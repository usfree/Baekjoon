#include <iostream>
using namespace std;

int main(void)
{
	for (int j = 0; j < 3; j++)
	{
		int arr[2] = { 0 };

		for (int i = 0; i < 4; i++)
		{
			int num;
			cin >> num;
			arr[num]++;
		}

		if (arr[0] == 1)
			cout << "A" << "\n";
		else if (arr[0] == 2)
			cout << "B" << "\n";
		else if (arr[0] == 3)
			cout << "C" << "\n";
		else if (arr[0] == 0)
			cout << "E" << "\n";
		else if (arr[0] == 4)
			cout << "D" << "\n";
	}
}