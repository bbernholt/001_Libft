/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:42:56 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/23 23:31:57 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_overflow(int result, int sign);

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

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
		ft_overflow((int)result, sign);
		str++;
	}
	return (result * sign);
}

static int	ft_overflow(int result, int sign)
{
	long	too_big;

	too_big = result;
	if (sign == 1 && too_big > 2147483647)
		too_big = -2147483648 + (too_big - 2147483648);
	if (sign != 1 && too_big < -2147483648)
		too_big = 2147483647 - (-2147483649 - (too_big * sign));
	return ((int)too_big);
}
