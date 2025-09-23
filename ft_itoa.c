/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:07:01 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/23 21:27:04 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	str_size;
	char	tmp;

	i = 0;
	str_size = ft_strlen(str);
	while (i < (str_size / 2))
	{
		tmp = str[i];
		str[i] = str[str_size - 1 - i];
		str[str_size - 1 - i] = tmp;
		i++;
	}
	return (str);
}

static size_t	ft_getnumlen(int n)
{
	size_t	len;

	n /= 10;
	len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;

	res = malloc(ft_getnumlen(n) + 1);
	if (!res)
	{
		return (NULL);
	}
	i = 0;
	while (n != 0)
	{
		res[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	res[i] = '\0';
	ft_strrev(res);
	return (res);
}
