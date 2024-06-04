#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char	c;
	char	*str;
	int	i;
	int	x;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			c = str[i];
			if (str[i] >= 97 && str[i] <= 122)
			{
				x = 122 - c;
				if (x >= 13)
					c = c + 13;
				else
				{
					x = 12 - x;
					c = 97 + x;
				}
			}
			else if (str[i] >= 65 && str[i] <= 90)
			{
				x = 90 - c;
				if (x >= 13)
					c = c + 13;
				else
				{
					x = 12 - x;
					c = 65 + x;

				}
			}
			write( 1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
