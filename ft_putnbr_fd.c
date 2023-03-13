#include "libft.h"


void	ft_write(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_write ('-', fd);
		ft_write ('2', fd);
		ft_putnbr_fd (147483648, fd);
	}
	else if (n < 0)
	{
		ft_write('-', fd);
		n = n * -1;
		ft_putnbr_fd (n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
	{
		ft_write(n + '0', fd);
	}
}