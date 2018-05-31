#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
			if(!write(fd, s++, 1))
				return ;
		if (!write(fd, "\n", 1))
				return ;
	}
}
