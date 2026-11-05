/*Assignment Task_3 :
		Write a C++ code that inputs an integer number of any length from user and print it into words.*/

#include<iostream>
int main()
{
	int num , rem = 0, reverse = 0;
	std::cout << "Enter an Integer Number =\t";
	std::cin >> num;

	while (num != 0)
	{
		rem = num % 10;
		num = num / 10;
		reverse = reverse * 10 + rem;
	}
	num = reverse;
	while (num != 0)
	{
		rem = num % 10;
		switch (rem)
		{
		case 1:
			std::cout << " One ";
			break;
		case 2:
			std::cout << " Two ";
			break;
		case 3:
			std::cout << " Three ";
			break;
		case 4:
			std::cout << " Four ";
			break;
		case 5:
			std::cout << " Five ";
			break;
		case 6:
			std::cout << " Six ";
			break;
		case 7:
			std::cout << " Seven ";
			break;
		case 8:
			std::cout << " Eight ";
			break;
		case 9:
			std::cout << " Nine ";
			break;
		}

		num = num / 10;
	}


}