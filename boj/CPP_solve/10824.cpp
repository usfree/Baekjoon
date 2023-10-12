#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	string s1 = to_string(A) + to_string(B);
	string s2 = to_string(C) + to_string(D);

	long long l1 = stol(s1);
	long long l2 = stol(s2);

	cout << l1 + l2;
}