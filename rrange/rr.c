#include <stdio.h>
#include <stdlib.h>

int *rr(int s, int e)
{
	int size;
	int *tab;
	int i = 0;

	size = e - s;
	if (size < 0)
		size *= -1;
	size++;
	tab = (int *)malloc(size * 4);
	while (size)
	{
		if (s > e)
			tab[i] = e++;
		else
			tab[i] = e--;
		i++;
		size--;
	}
	return (tab);
}


#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int s = atoi(argv[1]);
	int e = atoi(argv[2]);
	int size = e - s;
	if (size < 0)
		size *= -1;

	size++;
	int *tab = rr(atoi(argv[1]), atoi(argv[2]));
	while (size > i)
		printf("%d  ", tab[i++]);
	return (0);
}
