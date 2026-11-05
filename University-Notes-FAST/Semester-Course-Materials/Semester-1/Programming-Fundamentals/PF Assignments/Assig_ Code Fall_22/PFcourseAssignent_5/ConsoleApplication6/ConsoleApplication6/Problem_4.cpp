//#include<iostream>
//using namespace std;
//
//const int col = 2;
//
//void most_occured_number(int nums[][col], int rows, int cols);
//
//int main()
//{
//	int nums[][col] = { 4,5,9,12,9,22,45,7};
//
//	int rows = sizeof (nums) / sizeof nums[0][0];
//	rows = rows / 2; //dividing by dimensions of 2dimension array
//	int cols = sizeof nums[0] / sizeof(int);
//	cout << "Original Array :\n";
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << nums[i][j] << " ";
//		}
//		cout << endl;
//	}
//	most_occured_number(nums, rows, cols);
//
//	return 0;
//}
//
//void most_occured_number(int nums[][col], int rows, int cols)
//{
//
//	int max_count = 0;
//	cout << "\n Most occured Number :\t";
//	for (int c = 0; c < col; c++)
//	{
//		for (int r = 0; r < rows; r++)
//		{
//			int count = 1;
//			for (int j = r + 1; j < rows; j++)
//			{
//				if (nums[r][c] == nums[j][c])
//				{
//					count++;
//				}
//			}
//			if (count > max_count)
//				max_count = count;
//		}
//	}
//
//	for (int c = 0; c < col; c++)
//	{
//		for (int r = 0; r < rows; r++)
//		{
//			int count = 1;
//			for (int j = r + 1; j < rows; j++)
//				if (nums[r][c] == nums[j][c])
//					count++;
//			if (count == max_count)
//				cout << nums[r][c] << endl;
//		}
//	}
//}
