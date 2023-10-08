#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int arr[3];

	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);

	int n1 = arr[1] - arr[0];
	int n2 = arr[2] - arr[1];

	if (n1 == n2)
		cout << arr[2] + n1;
	else if (n1 < n2)
		cout << arr[1] + n1;
	else
		cout << arr[0] + n2;
}