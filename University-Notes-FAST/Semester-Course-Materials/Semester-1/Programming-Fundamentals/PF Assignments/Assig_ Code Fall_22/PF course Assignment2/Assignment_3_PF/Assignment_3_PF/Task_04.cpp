/* Assignment Task 4:
			Write a C++ program to prompt user to enter month and year. Your program should display the
number of days in the month of that year.*/

#include<iostream>
int main()
{
	int month, year;
	
	std::cout << "Enter Month Number :\t";
	std::cin >> month;

	std::cout << "Enter Year :\t";
	std::cin >> year;

	switch (month)
	{
	case 1:
		std::cout << "Number of Days in this Month = 31 Days";
		break;
	case 2:
		switch (year % 4)
		{
			case 0:
				std::cout << "Number of Days in Month = 29 Days";
					break;
			default:
				std::cout << "Number of Days in Month = 28 Days";
				break;
		}
		break;
	case 3:
		std::cout << "Number of Days in this Month = 31 Days";
		break;
	case 4:
		std::cout << "Number of Days in this Month = 30 Days";
		break;
	case 5:
		std::cout << "Number of Days in this Month = 31 Days";
		break;
	case 6:
		std::cout << "Number of Days in this Month = 30 Days";
		break;
	case 7:
		std::cout << "Number of Days in this Month = 31 Days";
		break;
	case 8:
		std::cout << "Number of Days in this Month = 31 Days";
		break;
	case 9:
		std::cout << "Number of Days in this Month = 30 Days";
		break;
	case 10:
		std::cout << "Number of Days in this Month = 31 Days";
		break;
	case 11:
		std::cout << "Number of Days in this Month = 30 Days";
		break;
	case 12:
		std::cout << "Number of Days in this Month = 31 Days";
		break;
	default:
		std::cout << "Incorrect Month !";
		break;
	}

	std::cout << std::endl << std::endl;
	system("pause");
	system("CLS");


}