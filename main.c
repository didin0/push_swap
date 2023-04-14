#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("atoi :    %d \n", atoi(argv[1]));
	printf("ft_atoi : %d", ft_atoi(argv[1]));
	return argc;
}