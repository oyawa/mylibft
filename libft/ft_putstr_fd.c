#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
			if (!write(fd, s++, 1))
					return ;
	}
}				
