#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	check_value;

	result = 0;
	check_value = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		check_value *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	printf("%d\n", result * check_value);
	return (result * check_value);
}

int	main(void)
{
	ft_atoi("  	-1234ppp");
	printf("%d\n", atoi("       -1234ppp"));
}
