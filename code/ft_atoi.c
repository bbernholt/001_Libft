#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		str++;
	}
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}
