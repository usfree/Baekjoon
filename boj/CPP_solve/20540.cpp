#include <iostream>
using namespace std;

int main(void)
{
	char arr[5];
	char result[5];

	cin >> arr;

	if (arr[0] == 'E')
		result[0] = 'I';
	else if (arr[0] == 'I')
		result[0] = 'E';
	if (arr[1] == 'S')
		result[1] = 'N';
	else if (arr[1] == 'N')
		result[1] = 'S';
	if (arr[2] == 'T')
		result[2] = 'F';
	else if (arr[2] == 'F')
		result[2] = 'T';
	if (arr[3] == 'J')
		result[3] = 'P';
	else if (arr[3] == 'P')
		result[3] = 'J';
	result[4] = '\0';
	cout << result;
}