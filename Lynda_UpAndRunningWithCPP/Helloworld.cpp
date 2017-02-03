#include<iostream>


int main()
{
	/*std::cout << "Hello World!!" << std::endl;

	int a = 0, b = 0;
	a = 1;
	b = 2;
	std::cout << "Output of printing: " << std::endl;
	std::cout << a + b<<std::endl;*/
	/*int i = 50, sum = 0;
	while (i<=100)
	{
		sum += i;
		i++;
	}
	std::cout << "Sum of values inclusive of 1 to 10 : " << sum<<" ";*/
	
	//int a = 10;
	//while (a >= 0)
	//{
	//	std::cout << a-- << std::endl;
	//}

	//return 0;

	int a=0, b=0;

	std::cout << "Enter the two numbers:" << std::endl;
	std::cin >> a >> b;

	if (a>b)
	{
		while (b <= a)
		{
			std::cout << b++ << std::endl;
		}
	}
	else
	{
		while (a <= b)
		{
			std::cout << a++ << std::endl;

		}
	}
}