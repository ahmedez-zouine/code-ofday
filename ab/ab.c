#include <stdio.h>

int ab(char *str, int bs)
{
	int i = 0;
	int r;
	int sign = 1;
	int result = 0;

	if (bs < 2 || bs > 16)
		return (0);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			r = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			r = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			r = str[i] - 'A' + 10;
		else
			return (0);
		if (result > bs)
			return (0);
		result = result * bs + r;
		i++;
	}
	return (result * sign);
}
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	int result = ab(argv[1], 16);
	printf("%d", result);
	return (0);
}
