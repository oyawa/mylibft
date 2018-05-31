#include <unistd.h>

void	ft_putstr(char const *s)
{

	if (s)
	{
		while (*s)
			if (!write(1, s++, 1))
				return ;
	}
}
