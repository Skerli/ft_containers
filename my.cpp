#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int a = fork();

	if (a == 0)
		printf("%d\n", 100000);
	else
		printf("%d\n", 189345347548);

}