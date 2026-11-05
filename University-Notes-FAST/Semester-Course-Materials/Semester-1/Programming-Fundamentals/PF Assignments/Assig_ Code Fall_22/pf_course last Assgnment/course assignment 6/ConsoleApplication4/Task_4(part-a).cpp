/*Task_4:a:*/
#include<iostream>
#include<string>
using namespace std;

void fun(int x , int y )
{
	cout << "reverse number is " << endl;
	
	while (y>0)
	{
		x = y % 10;
		
		y = y / 10;

		cout << x;
	}
	return;
}

int main()
{
	int x =0 , y = 0;
	cout << "please eneter a number " << endl;
	cin >> y;
	fun(x, y);
	return 0;

}