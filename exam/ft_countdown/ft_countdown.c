#include <unistd.h>

void ft_countdown(char c)
{
	write(1, &c, 1);
	if (c > '0')
	{
		ft_countdown(c - 1);
	}
}

int main(void)
{
	ft_countdown('9');
	write(1, "\n", 1);
	return 0;
}
