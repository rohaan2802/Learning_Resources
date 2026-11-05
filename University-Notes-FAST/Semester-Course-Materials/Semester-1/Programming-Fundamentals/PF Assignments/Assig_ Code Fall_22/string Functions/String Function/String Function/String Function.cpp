
//Swapping strings without using functions:

#include<iostream>
using namespace std;
int main()
{

	string str1 = "I Study In Fast University";
	string str2 = "Faislabad";
	string temp = "";

	cout << "======================================Before Swapping======================================" << endl;
	cout << "String 1 before swapping =\t" << str1 << endl;
	cout << "String 2 before swapping =\t" << str2 << endl;

	//str1.swap(str2); cout << endl << str2;

	temp = str1;
	str1 = str2;
	str2 = temp;

	cout << "==============================================After Swapping===============================" << endl;
	cout <<"string 1 After Swapping =\t" << str1 << endl;
	cout<< "string 2 After Swapping =\t" << str2 << endl;
	cout << endl<<endl;
	system("paused");

}