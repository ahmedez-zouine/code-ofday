#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char tab[20];
	int n;
	char *base = "0123456789abcdef";
	int nb = atoi(argv[1]);
	int i = 0;
	while (nb > 0)
	{
		tab[i] = base[nb % 16];
		nb /= 16;
		i++;
	}
	while (i--)
		write(1, &tab[i], 1);
	write(1, "\n", 1);
	return (0);
}
