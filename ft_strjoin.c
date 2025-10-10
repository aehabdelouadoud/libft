/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 01:47:36 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/29 23:41:40 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_size;

	res_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(res_size);
	if (!res)
	{
		return (NULL);
	}
	ft_strcpy(res, s1);
	ft_strcpy(res + ft_strlen(s1), s2);
	return (res);
}
