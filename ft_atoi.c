/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:23:46 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/18 15:49:48 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		i = 1;
		sign = -1;
	}
	res = 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		res = (res * 10) + (*(str + i) - '0');
		i++;
	}
	return (res * sign);
}
