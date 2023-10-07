#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char arr[105];
	int i = 0, result = 0;

	cin >> arr;
	int size = strlen(arr);
	while (i < size)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			result++;
		i++;
	}
	cout << result;
}