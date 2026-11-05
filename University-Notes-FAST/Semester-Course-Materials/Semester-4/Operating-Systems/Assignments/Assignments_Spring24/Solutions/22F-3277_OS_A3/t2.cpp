#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;
int main() 
{
 pid_t pid = fork();
 if (pid > 0)
{ 
 cout << "A) Parent (P) is having ID " << getpid() << endl;
 wait(NULL); 
 cout << "B) ID of P’s Child is " << pid << endl;
 } 
 else if (pid == 0) 
{
 cout << "C) Child is having ID " << getpid() << endl;
 cout << "D) My Parent ID is " << getppid() << endl; 
 } 
 else 
{
 cout << "Fork failed" << endl;
 return 1;
 }
 return 0; }
