#include <iostream>
using namespace std;

int euclid(int num1, int num2)
{
	if (num2 == 0)
		return num1;
	else
		return euclid(num2, num1 % num2);
}

int main(void)
{
	int num1, num2;

	cin >> num1 >> num2;
	cout << euclid(num1, num2) << "\n";
	cout << (num1 * num2) / euclid(num1, num2);
}