#include<iostream>
using namespace std;

int main()
{
	char temp;
	for (int num = 0; num <= 127; num++)
	{
		temp = num;
		cout << num << " : " << temp << endl;
	}
	return 0;
}