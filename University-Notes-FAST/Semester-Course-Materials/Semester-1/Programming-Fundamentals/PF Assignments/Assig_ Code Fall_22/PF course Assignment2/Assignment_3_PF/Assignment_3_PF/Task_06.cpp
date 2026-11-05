/*Assignment_Task_6:
			In this question, find the Sum of following exponential series up to N terms. Ask the user to input N
and X from the console. You are not allowed to use any built-in, library or custom-made functions.*/
#include<iostream>
#include<conio.h>
int main()
{
	float p = 0,power=1,c=0,n,x,fact=1,sumfact=0;
	std::cout << "Enter Nth Term of Series =\t";
	std::cin >> n;
	std::cout << "Enter Value of X =\t";
	std::cin >> x;

	std::cout << "Sum = ";
	while (p <= n)
	{
		
		power = 1;
		c = 0;
		while (c < p)
		{
			power = power * x;
			c++;
		}
		
		c = 1;
		fact = 1;
		while (c <= p)
		{
			fact = fact * c;
			c++;

		}
		sumfact = sumfact + fact;
		if(p!=0)
		std::cout << " + ";
		std::cout << power / sumfact;
		
		p++;

	}
	std::cout << std::endl;
	std::cout << std::endl;
	_getch();
	system("paused");
	


}