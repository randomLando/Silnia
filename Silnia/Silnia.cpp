#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	long long silnia = 1;

	cin >> n;

	for (int i = n; i > 1; i--)
		silnia *= i;

	cout << silnia << endl;

	return 0;
}