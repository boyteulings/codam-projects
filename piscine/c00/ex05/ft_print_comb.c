#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	print(int x, int y, int z)
{
	ft_putchar(x + '0');
	ft_putchar(y + '0');
	ft_putchar(z + '0');
	if (x < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 0;
	while (x <= 9)
	{
		y = x + 1;
		while (y <= 9)
		{
			z = y + 1;
			while (z <= 9)
			{
				print(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
