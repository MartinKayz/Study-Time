#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main(int ac, char **av)
{
	int i = 1;
	while(av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return 0;
}

