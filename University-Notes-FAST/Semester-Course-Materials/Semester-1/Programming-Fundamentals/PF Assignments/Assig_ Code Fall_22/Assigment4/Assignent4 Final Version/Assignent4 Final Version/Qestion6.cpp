#include<iostream>
using namespace std;
int main()
{
	int arr1[5][5], arr2[5][5], rows, col, f, arr3[5][5] = { 0 };

	cout << " enter  rows";
	cin >> rows;
	cout << " enter coloums ";
	cin >> col;
	cout << " enter elements of matrix 1";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr1[i][j] << "  ";
		}
		cout << endl;
	}
	cout << " enter the elemnts of matrix b";

	for (int k = 0; k < col; k++)
	{
		for (int l = 0; l < rows; l++)
		{
			cin >> arr2[k][l];
		}
	}
	for (int k = 0; k < col; k++)
	{
		for (int l = 0; l < rows; l++)
		{
			cout << arr2[k][l] << "  ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < rows; k++)
			{
				arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
			}
		}
	}

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i == j & arr1[i][j] != 1)
			{
				f = 1;
				break;
			}
			else if (i != j & arr1[i][j] != 0)
			{
				f = 1;
				break;
			}
		}
	}
	if (f == 0)
	{
		cout << " matrix is identity ";

	}
	else
		cout << " matrix is not identity ";
}