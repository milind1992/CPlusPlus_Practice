#include<iostream>
using namespace std;

int main()
{

	int value = 0;
	int sum = 0;
	while (cin >> value)
	{
		sum += value;
	}
	cout << "The sum of all the entered values: ";
	cout << sum << endl;

	return 0;
}