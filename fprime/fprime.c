#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int nb = atoi(argv[1]);
	if (nb == 1)
		printf("1");
	int prime = 2;
	while (nb >= prime)
	{
		if (nb % prime == 0)
		{
			printf("%d", prime);
			nb /= prime;
			if (nb >= prime)
				printf("*");
			prime--;
		}
		prime++;
	}
	printf("\n");
}
