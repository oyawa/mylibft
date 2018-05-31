#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		while (*s)
			if (!write(1, s++, 1))
				return ;
		if (!write(1, "\n", 1))
			return ;
	}
}
