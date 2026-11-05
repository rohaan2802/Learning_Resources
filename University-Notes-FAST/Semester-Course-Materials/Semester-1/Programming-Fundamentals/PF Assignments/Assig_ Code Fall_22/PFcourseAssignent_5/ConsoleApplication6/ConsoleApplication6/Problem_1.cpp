//#include<iostream>
//using namespace std;
//int main()
//{
//    string str;
//    int i = 0, j, chk;
//    cout << "Enter String without spaces :\t ";
//    cin >> str;
//    for(int i=0; str[i] != '\0';i++)
//    { 
//        chk = 0;
//        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
//            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//        {
//           for(int j = i; str[j - 1] != '\0';j++)
//           { 
//                str[j] = str[j + 1];
//            }
//            chk = 1;
//        }
//    }
//    cout << "\nString without Vowels = " << str;
//    cout << endl;
//    return 0;
//}