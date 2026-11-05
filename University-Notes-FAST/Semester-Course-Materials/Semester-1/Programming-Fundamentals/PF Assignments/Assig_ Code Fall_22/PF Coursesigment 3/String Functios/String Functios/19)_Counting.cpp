
//Counting String:

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "y22qqq******";
    cout << "Input string: " << str << endl << endl;

    /* create counters for uppercase and lowercase letters, special characters and numbers */
    int count_upper = 0;
    int count_lower = 0;
    int count_special = 0;
    int count_num = 0;

    /* loop through string */
    for (int i = 0; i < str.length(); i++) { /* check if current char is in upper case ASCII range */ if (str[i] >= 'A' && str[i] <= 'Z') { count_upper++; } /* check if current char is in lower case ASCII range */ else if (str[i] >= 'a' && str[i] <= 'z') { count_lower++; } /* check if current char is in numeric values ASCII range */ else if (str[i] >= '0' && str[i] <= '9')
    {
        count_num++;
    }
    /* otherwise, it is a special character */
    else
    {
        count_special++;
    }
    }

    cout << "Number of upper case letters: " << count_upper << endl;
    cout << "Number of numeric values    : " << count_num << endl;
    cout << "Number of lower case letters: " << count_lower << endl;
    cout << "Number of special characters: " << count_special << endl;

    return 0;
}