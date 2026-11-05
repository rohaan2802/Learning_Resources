/*
//PopBack string:

#include <iostream>
using namespace std;
void main()
{
	string str1 = "I study in Fast Uni";
	string str2 = "";

	//pop_back will remove one character from right

	char ch;
	int length = 0, n;

	while (str1[length] != '\0')
	{
		ch = str1[length];
		length++;
	}
	cout << "How many characters to copy from right side :\t";
	cin >> n;

	for (int i = 0; i < length-1; i++)
			{
				str2 = str2 + str1[i];
			}

	cout << "String after popback =\t" << str2;
}*/