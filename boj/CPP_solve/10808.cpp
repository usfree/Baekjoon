#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char input[101];
	int base[26] = { 0 };

	cin >> input;
	for (int i = 0; i < strlen(input); i++)
		base[input[i] - 97]++;

	for (int i = 0; i < 26 ; i++)
		cout << base[i] << " ";
}