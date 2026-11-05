//#include<iostream>
//using namespace std;
//const int row = 3, col = 3;
//int main()
//{
//	int arr[row][col];
//	int find,count=0;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << "Enter number :\t";
//			cin >> arr[i][j];
//		}
//		cout << endl;
//	}
//	cout << "Original Matrix :\t\n";
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout<< arr[i][j];
//		}
//		cout << endl;
//	}
//
//	cout << "Enter Number you want to find :\t";
//	cin >> find;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (arr[i][j] == find)
//			{
//				arr[i][j] = 5;
//			}
//			else if(arr[i][j]!=find)
//			{
//				count++;
//			}
//		}
//
//	}
//	if (count == 9)
//	{
//		cout << "Number not found \n";
//	}
//	else
//	{
//		cout << "Matrix After replacing:\t\n";
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				cout << arr[i][j];
//			}
//			cout << endl;
//		}
//	}
//
//}