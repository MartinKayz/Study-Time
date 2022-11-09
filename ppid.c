#include <stdio.h>
#include <unistd.h>

/**
  * getppid - Get the PID of the parent
  * 
  * Return: Always 0
  */


int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("%u\n", my_ppid);

	return 0;

}


