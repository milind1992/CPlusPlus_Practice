#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


int main()
{

	double length, width,area,perimeter;
	double radius, circleArea, circlePerimeter;
	double PI = 3.1415926535897;
	string FirstName, LastName,FullName;

	cout << "Enter the information about the Rectangle:" << endl;
	cout << "Length:";
	cin >> length;
	cout << "\nWidth:";
	cin >> width;
	cout << endl;
	area = length*width;
	perimeter = (length + width) * 2;

	cout << "Area: " << fixed << setprecision(2) << area << endl;
	cout << "Perimeter: " << fixed << setprecision(2) << perimeter << endl;

	cout << "----------------------------------------------------------------" << endl;

	cout << "Enter the details about the Circle" << endl;
	cout << "Radius: ";
	cin >> radius;

	circleArea = PI*pow(radius, 2);
	circlePerimeter = PI * 2 * radius;

	cout << "\nArea:" << fixed << setprecision(2) << circleArea << endl;
	cout << "Perimeter: " << fixed << setprecision(2) << circlePerimeter << endl;
	
	cout << "------------------------------------------------------------------" << endl;

	cout << "Enter the details of a person:" << endl;
	cout << "First Name:";
	cin >> FirstName;
	cout << "Last Name:";
	cin >> LastName;
	FullName = FirstName +" "+ LastName;
	cout << "\n Full Name: " << FullName<<endl;

	return 0;

}