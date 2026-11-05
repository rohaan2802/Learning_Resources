#include <iostream>
#include <pthread.h>
using namespace std;
struct Summation 
{
    int N;
    int result;
};
void* summation(void* arg) 
{
    Summation* array = (Summation*)arg;
    int N = array->N;
    array->result = 0;
    for (int i = 0; i <= N; ++i) {
        array->result += i;
    }
    pthread_exit(NULL);
}
int main()
{
    int N;
    cout << "Enter a non-negative integer N: ";
    cin >> N;

    if (N < 0) 
	{
        cout << "Please enter a non-negative integer\n";
        return 1;
    }

    pthread_t tid;
    Summation array;
    array.N = N;

    if (pthread_create(&tid, NULL, summation, (void*)&array)) 
	{
        cout << "Error creating thread\n";
        return 1;
    }

    if (pthread_join(tid, NULL)) 
	{
        cout << "Error joining thread\n";
        return 1;
    }

    cout << "Summation of integers from 0 to " << N << " is: " << array.result;

    return 0;
}
