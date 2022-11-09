#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	char *buffer = malloc(1024);

	size_t line = 10;

	printf("$ ");
	getline(&buffer, &line, stdin);
	printf("%s",buffer);

	return 0;

}



