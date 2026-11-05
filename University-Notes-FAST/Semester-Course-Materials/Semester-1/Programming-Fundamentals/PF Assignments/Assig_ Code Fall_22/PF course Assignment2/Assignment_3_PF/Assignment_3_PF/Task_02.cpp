/*Assignment Task_2 : 
				Write a C++ program that takes an integer type variables from the user and output the following
things;
1. Count the number of digits in that number
2. Reverse this number and store back into the original variable.*/

#include<iostream>
int main()
{
	int num, r = 0, temp = 0, count = 0, digit = 0, reverse = 0;
	std::cout << "Enter Number =\t";
	std::cin >> num;
	temp = num;
	while (num > 0)
	{
		r = num % 10;
		digit = digit + 1;
		num = num / 10;
	}
	std::cout << "Number of Digits are =\t" << digit << std::endl;
	num = temp;
	while (count < digit)
	{
		r = num % 10;
		num = num / 10;
		reverse = reverse * 10 + r;
		count++;
	}
	num = reverse;
	std::cout << "Reverse of Number =\t" << num << std::endl;

}