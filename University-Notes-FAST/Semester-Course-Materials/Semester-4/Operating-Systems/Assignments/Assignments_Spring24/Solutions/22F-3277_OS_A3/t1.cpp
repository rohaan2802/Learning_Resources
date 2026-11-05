#include<iostream>
#include<pthread.h>
int a[5];
using namespace std;
void* min(void* arg)
{
 int * a = (int*) arg;
 int m = a[0];
 for (int i=0;i<5;i++)
 {
 if (a[i] < m)
 m = a[i];
 }
 cout << "\nMin: " << m << endl;
 pthread_exit(NULL);
}
void* max(void* arg)
{
 int * a = (int*) arg;
 int m = a[0];
 for (int i=0;i<5;i++)
 {
 if (a[i] > m)
 m = a[i];
 }
 cout << "\nMax: " << m << endl;
 pthread_exit(NULL);
}
void* avg(void* arg)
{
 int * a = (int*) arg;
 int sum = 0;
 for (int i=0;i<5;i++)
 sum += a[i];
 cout << "\nAverage: " << sum/5 << endl;
 pthread_exit(NULL);
}
int main()a
{
for (int i=0; i<5; i++)
{
 cout << "Enter num" << i+1 << " ";
 cin >> a[i];
 }
 pthread_t pidt1,pidt2,pidt3;
 pthread_create(&pidt1,NULL,&avg,(void*)a);
 pthread_create(&pidt2,NULL,&max,(void*)a);
thread_create(&pidt3,NULL,&min,(void*)a);
 pthread_join(pidt1, NULL);
 pthread_join(pidt2, NULL);
 pthread_join(pidt3, NULL);
return 0;
}
