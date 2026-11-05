#include<iostream>
using namespace std;
void hollowsquare(int);
void hollowrectangle(int);
void hollowparallelogram(int);
void hollowrhombus(int);
void hollowtriangle(int);

char Array2D[20][20] = { ' ' };

int main() {
    int num, hollow;
    cout << "1 for square" << endl << "2 for rectangle" << endl << "3 for parallelogram " << endl << "4 for rhombus " << endl << "5 for triangle" << endl;
    cin >> num;
    switch (num) {
    case 1:
        cout << "Selected Square" << endl;
        cout << "0.Filled\t1.Hollow" << endl;
        cin >> hollow;
        hollowsquare(hollow);
        break;
    case 2:
        cout << "Selected Rectangle" << endl;
        cout << "0.Filled\t1.Hollow" << endl;
        cin >> hollow;
        hollowrectangle(hollow);
        break;
    case 3:
        cout << "Selected Parallelogram" << endl;
        cout << "0.Filled\t1.Hollow" << endl;
        cin >> hollow;
        hollowparallelogram(hollow);
        break;
    case 4:
        cout << "Selected Rhombus" << endl;
        cout << "0.Filled\t1.Hollow" << endl;
        cin >> hollow;
        hollowrhombus(hollow);
        break;
    case 5:
        cout << "Selected Triangle" << endl;
        cout << "0.Filled\t1.Hollow" << endl;
        cin >> hollow;
        hollowtriangle(hollow);
        break;
    default:
        cout << "Invalid Option!" << endl;
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cout << Array2D[i][j];
        }
        cout << endl;
    }

}

void hollowrhombus(int h)
{
    int i, j, rows;
    char ch;
    cout << "Enter rows\n";
    do {
        cout << "> ";
        cin >> rows;
    } while (rows > 20);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            Array2D[i - 1][j - 1] = ' ';
        }
        for (j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows || h == 0) {
                Array2D[i - 1][rows + j - 1] = '*';
            }
            else {
                Array2D[i - 1][rows + j - 1] = ' ';
            }
        }
    }
}
void hollowrectangle(int h)
{
    int i, j, rows, columns;

    cout << "Enter Rows\n";
    do {
        cout << "> ";
        cin >> rows;
    } while (rows > 20);

    cout << "EnterColumns\n";
    do {
        cout << "> ";
        cin >> columns;
    } while (columns > 20);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1 || h == 0)
            {
                Array2D[i][j] = '*';
            }
            else
            {
                Array2D[i][j] = ' ';
            }
        }
    }
}

void hollowsquare(int h)
{
    int i, j, side;

    cout << "Enter Side of a Hollow Square\n";
    do {
        cout << "> ";
        cin >> side;
    } while (side > 20);

    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1 || h == 0)
            {
                Array2D[i][j] = '*';
            }
            else
            {
                Array2D[i][j] = ' ';
            }
        }
    }
}
void hollowparallelogram(int h) {
    int i, j, rows, columns;
    char ch;
    cout << "Enter the number of rows\n";
    do {
        cout << "> ";
        cin >> rows;
    } while (rows > 20);
    cout << "Enter the number of columns\n";
    do {
        cout << "> ";
        cin >> columns;
    } while (columns > 20);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            Array2D[i - 1][j - 1] = ' ';
        }
        for (j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns || h == 0) {
                Array2D[i - 1][j + columns - 1] = '*';
            }
            else {
                Array2D[i - 1][j + columns - 1] = ' ';
            }
        }
    }

}
void hollowtriangle(int h)
{
    int height;
    cout << "Enter the height of the triangle\n";
    do {
        cout << "> ";
        cin >> height;
    } while (height > 10);
    for (int i = 1; i <= height; i++) // 1 3 7 
    {
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1 || h == 0)
            {
                Array2D[i - 1][k - 1] = '*';
            }
            else if (i == height)
            {
                Array2D[i - 1][k - 1] = '*';
            }
            else
            {
                Array2D[i - 1][k - 1] = ' ';
            }
        }
    }
}