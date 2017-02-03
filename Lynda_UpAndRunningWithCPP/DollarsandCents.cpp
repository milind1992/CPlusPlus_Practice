#include<iostream>
using namespace std;

int main()
{
	int dollars, cents;
	double double_dollars;

	char dollarSign = 36;

	cout << "Enter the Dollar Value: " <<dollarSign;
	cin >> double_dollars;
	dollars = static_cast<int>(double_dollars);
	cents = double_dollars * 100 - dollars * 100;

	cout << "Value of Dollar and Cents are : " << endl;
	cout << "Dollars:" << dollars << " Cents:" << cents << endl;

	return 0;
	
}