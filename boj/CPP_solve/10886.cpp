#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int arr[2] = { 0 };
	int N;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int cute;
		cin >> cute;
		arr[cute]++;
	}
	
	if (arr[0] > arr[1])
		cout << "Junhee is not cute!";
	else
		cout << "Junhee is cute!";
}