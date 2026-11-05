/* Assignment_Task_8:
				An organization wanted to give bonus to his employees in three situations
a) For either gender, if age is more than 30 and basic pay is more than 25000 then bonus is
25% of basic pay
b) For male, if age is less than 30, and basic pay is more than 21000 then bonus is 17% of
basic pay
c) For female employees, if age is less than 25, and basic pay is more than 18000 then bonus is
13% of basic pay
In any other condition organization will not give bonus.
Use sentinel controlled while loop to input the employees data from user. Whenever user enters, -
999 then stop your program!*/


#include<iostream>
int main()
{
	int age, basicpay,userinput=1;
	float bonus=0;
	char gender;
	while (1)
	{
		std::cout << "Enter basic Pay =\t";
		std::cin >> basicpay;
		std::cout << "Enter age =\t";
		std::cin >> age;
		std::cout << "Enter gender =\t";
		std::cin >> gender;

		if (age > 30 && basicpay > 25000)
		{
			bonus = 0.25 * basicpay;
			std::cout << "Your Bonus is =\t" << bonus << std::endl;
		}
		
		else if (gender == 'M' || gender == 'm'&& age < 30 && basicpay>21000)
		{
				bonus = 0.17 * basicpay;
				std::cout << "Your Bonus is =\t" << bonus << std::endl;
		}
		
		else if (gender == 'F' || gender == 'f' && age < 25 && basicpay>18000)
		{
				bonus = 0.13 * basicpay;
				std::cout << "Your Bonus is =\t" << bonus << std::endl;
		}
	
		else
		{
			std::cout << "Not eligible for bonus"<< std::endl;
		}
		
		std::cout << "-----------------------------------------------------" << std::endl;
		
		std::cout << "Enter 999 to terminate program..!!..\t"<<"\n\t\t = ";
		std::cin >> userinput;
		if (userinput == 999)
		{
			break;
		}
	}

	system("pause");

}