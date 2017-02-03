/*

*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double mpg, distance, gallons, pricePerGallon, totalCost;

	cout << "Enter the Distance :" << endl;
	cin >> distance;
	cout << "Enter mpg: " << endl;
	cin >> mpg;
	cout << " Enter price for one gallon of gas:" << endl;
	cin >> pricePerGallon;
	
	gallons = distance / mpg;

	totalCost = gallons*pricePerGallon;
	cout << " Total trip cost: $" << fixed << setprecision(2) << totalCost << endl;
	int a;
	cin >> a;
	return 0;
}



