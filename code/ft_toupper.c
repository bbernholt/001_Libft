/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 08:05:53 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/06 18:17:57 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
