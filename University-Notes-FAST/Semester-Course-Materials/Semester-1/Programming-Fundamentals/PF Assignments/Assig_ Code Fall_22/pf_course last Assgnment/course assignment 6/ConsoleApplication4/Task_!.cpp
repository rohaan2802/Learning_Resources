/*Task_1:
		prints the day number of the year, given the date in the form month-day-year.*/
#include<iostream>
#include<string>
using namespace std;

void fun(int x, int y, int z , int k , int g)
{
	if (x == 1)
	{
		k = 31;
		g = 31 - z;
	  }

	if (x == 2)
	{
		k = 31 +28;
		g = 28 - z;
	}

	if (x == 3)
	{
		k = 31+28+31;
		g = 31 - z;
	}

	if (x == 4)
	{
		k = 31+28+31+30;
		g = 30 - z;
	
	}

	if (x == 5)
	{
		k  = 31 + 28 + 31 + 30 + 31;
		g = 31 - z;
	}

	if (x == 6)
	{
		k= 31 + 28 + 31 + 30+31+30;
		g = 30 - z;
	}

	if (x == 7)
	{
		k= 31 + 28 + 31 + 30 + 31 + 30+31;
		g = 31 - z;
	}

	if (x == 8)
	{
		k= 31 + 28 + 31 + 30 + 31 + 30+31 +31;
		g = 31 - z;
	}

	if (x == 9)
	{
		k= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31+30;
		g = 30 - z;
	}

	if (x == 10)
	{
		k= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31+30+31;
		g = 31 - z;
	}

	if (x == 11)
	{
		k= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30;
		g = 30 - z;
	}

	if (x == 12)
	{
		k= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30+31;
		g = 31 - z;
	}

	if (x >= 2 && y % 4 ==0 )
	{
		if (y % 100 != 0)
		{
			k = k + 1;
		}
		if (y % 100 == 0 && y%400==0)
		{
			k = k + 1;
		}
	}
	k = k - g;

	cout << "days are = " << k << endl;



}
int main()
{
	int x, y, z , k=0 , g=0;

	cout << "please enter month " << endl;
	cin >> x;

	cout << "please enter day" << endl;
	cin >> z;

	cout << "please enter year" << endl;
	cin >> y;

	fun(x, y, z, k , g);

	return 0;


}