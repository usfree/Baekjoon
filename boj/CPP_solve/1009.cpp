#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char arr[21];

	cin >> arr;

	int size = strlen(arr);
	int check = 0;
	int i = 0;
	while (i < (size / 2))
	{
		if (arr[i] == arr[size - i - 1])
			check++;
		i++;
	}

	if (check == size / 2)
		cout << "true" << endl;
	else
		cout << "false" << endl;
}